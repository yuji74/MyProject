# -*- coding: utf-8 -*-
"""
Created on Thu Apr 21 12:19:21 2016

@author: Kushiro Lab3
"""

"""
eye_tribeのトラッカーサーバとソケット通信を行う関数群
host == 'localhost'
port == 6555
"""


import socket
import json
import time
from multiprocessing import Queue

# 過去の測定を保存する上限
SAVECOUNT = 100
#サーバから受信する時のバッファのサイズ
BUFFER_SIZE = 1024
#設定したFPS
FPS = 60
#FPSを計算するときのサンプル数
N = 60
#ほんとはstaticな変数にしたかった・・・
count = 0
# 画面の解像度
XRESOLUTION = 1366
YRESOLUTION = 768
# 画面の分割数
XRESONUM = 20
YRESONUM = 15
# 画面を分割
XRESO = XRESOLUTION / XRESONUM
YRESO = YRESOLUTION / YRESONUM
# 座標の値を保存するファイル名
SAVEFILE = "text.txt"

# classを用いて構造体のようなものを作る
# 過去SAVECOUNT回分のデータを保存する
class pointOfView_ope:
    def __init__(self):
        self.count = 0
        self.now_place = -1      # データを追加する前の段階で、一番新しいデータがある配列の引数 
        self.x_save_data = []
        self.y_save_data = []
    
    # タプル型の値を渡されたら、x、yの座標をそれぞれリストsave_dataに保存する
    def save(self, x_y_tup):
        if self.count == SAVECOUNT:
            if self.now_place == SAVECOUNT - 1:
                self.now_place = 0
            else:
                self.now_place += 1
            self.x_save_data[self.now_place] = x_y_tup[0]
            self.y_save_data[self.now_place] = x_y_tup[1]
            
        else:
            self.x_save_data.append(x_y_tup[0])
            self.y_save_data.append(x_y_tup[1])
            self.count += 1
            
    # 保存された今までのx、y座標の平均を出し、タプル型で返す
    def cal_ave(self):
        x_ave = sum(self.x_save_data) / self.count
        y_ave = sum(self.y_save_data) / self.count
        
        return (x_ave, y_ave)
      
# 注視していた場所と時間を保存するメソッド
def saveFile(qtank):
    x = []
    y = []
    time = []
    count = 0
    prex = -2
    prey = -2
    
    while qtank.empty() == False:
        eye_x, eye_y = qtank.get()
        # x,y座標を渡し、対応する数字を受け取る
        xp = rt_xplace(eye_x)
        yp = rt_yplace(eye_y)
        
        # xかyの座標が変わったら
        if(prex != xp or prey != yp):
            if(prex != -2):
                # 前の視点をどれだけの時間見ていたかを計算して
                gaze_time = (1.0 / 30.0) * count
                time.append(gaze_time)
                # 前見ていた座標を保存し
                if prex == -1:
                    x.append(XRESOLUTION)
                else:
                    x.append(prex * XRESO)
                if prey == -1:
                    y.append(YRESOLUTION)
                else:
                    y.append(prey * YRESO)
            prex = xp
            prey = yp
            count = 0
        else:
            count += 1
    gaze_time = (1.0 / 30.0) * count
    time.append(gaze_time)
    if prex == -1:
        x.append(XRESOLUTION)
    else:
        x.append(prex * XRESO)
    if prey == -1:
        y.append(YRESOLUTION)
    else:
        y.append(prey * YRESO)
    
    f = open(SAVEFILE, "w")
    for i in range(len(x)):
        text = "{} {} {}\n".format(x[i], y[i], time[i])
        f.write(text)
    f.close()

# xの座標を渡されて、対応する数を返す
def rt_xplace(x):
    i = 0
    if x < 0:       # 画面より左側を見ていたら0を返す
        return 0
    while (XRESO * (i + 1)) < XRESOLUTION :         # 画面内なら対応する数を返す
        if (XRESO * i) <= x and x < (XRESO * (i + 1)):
            return i
        i += 1
    return -1       # 画面の右端から右側を見ていたら-1を返す
    
# yの座標を渡されて、対応する数を返す    
def rt_yplace(y):
    i = 0
    if y < 0:       # 画面より上側を見ていたら0を返す
        return 0    
    while (YRESO * (i + 1)) < YRESOLUTION :         # 画面内なら対応する数を返す
        if (YRESO * i) <= y and y < (YRESO * (i + 1)):
            return i
        i += 1
    return -1       # 画面の下端から下側を見ていたら-1を返す
    

def connect_to_tracker(host = 'localhost', port = 6555):
    """
    サーバとの通信を確立させるだけの関数
    戻り値に確立したソケットを返す
    """
    #指定したhost, portのソケットを作成
    client_sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    #指定したhost, portへの接続
    client_sock.connect((host, port))
    #作成したソケットを返す
    return client_sock   
        
def query_tracker(message = None):
    """
    サーバにデータを送信するように要求するプログラム
    引数なしでframe,
    引数ありで任意のデータを受信する
    現在は受信したデータをそのままprintするのみ
    """
    
    #サーバに投げるmessage
    #以下のURLを参照
    #http://dev.theeyetribe.com/api/
    if message is None:
        message = """{
            "category": "tracker",
            "request" : "get",
            "values": [ "frame" ]
        }""".encode('utf-8')
        
    #通信の確立
    client_sock = connect_to_tracker()
    #サーバにmessageを送信
    client_sock.send(message)
    #サーバからの返信を受信,現状受信したデータはこの関数では使わない
    response = client_sock.recv(BUFFER_SIZE)
    
    #printとかしてみたりして、でも標準出力は遅いからコメントアウト
    #print(response)
    
    #ソケットを閉じる
    client_sock.close()
    
    
def query_tracker_framerate():
    """
    eyetribeのフレームレートを取得して標準出力
    """
    
    #サーバに投げるmessage
    #以下のURLを参照
    #http://dev.theeyetribe.com/api/
    message  = """{
            "category": "framerate",
            "request" : "get"}""".encode('utf-8')
        
    #通信の確立
    client_sock = connect_to_tracker()
    #サーバにmessageを送信
    client_sock.send(message)
    #サーバからの返信を受信
    response = client_sock.recv(BUFFER_SIZE)
    
    #printとかしてみたりして
    print("framerate:",)
    print(response)
    
    #ソケットを閉じる
    client_sock.close()
    
def query_tracker_frame(q):
    """
    引数に与えられたキューにサーバから取得したデータ(座標（タプル）)をpushする関数
    60fpsで動作する
    """
    #サーバに投げるmessage
    #以下のURLを参照
    #http://dev.theeyetribe.com/api/
    message = """{
            "category": "tracker",
            "request" : "get",
            "values": [ "frame" ]
        }""".encode('utf-8')    
        
    #通信の確立
    client_sock = connect_to_tracker()
    #以下、無限ループしながらサーバからデータを取得し、ソレをキューにputする
    while True:

        #サーバにデータを送信するように要求
        client_sock.send(message)  
        #サーバからの返信
        response = client_sock.recv(BUFFER_SIZE)
        #取得したデータをバイナリ型から文字列に変換
        data = response.decode('utf-8') 
        #文字列型を辞書型に変換
        res_dict = json.loads(data)
        #return_eye_place()でサーバから取得した生データを(x,y)のタプルに変換
        #変換した(x,y)をキューにput
        q.put(return_eye_place(res_dict))
        
    #ソケットを閉じる
    client_sock.close()


def adjust_fps():
    """
    サーバから取得するデータの間隔を60fpsにする関数
    と思ったけど、
    そもそもサーバからは30fpsでデータが送信されるから
    この関数いらなかったね
    """
    global count    
    
    #1フレーム目なら時刻を記録
    if count == 0:
        start_time = time.time()
    #Nフレーム目なら時刻を記録
    if count == N:
        #測定終了
        end_time = time.time()
        #endとstartのtimeからfpsを計測
        fps = 1000.0 / ((end_time - start_time) / float(N))
        count = 0
        start_time = end_time
    count += 1
    
    #経過時間
    took_time = time.time() - start_time
    #待つべき時間        
    wait_time = count / FPS - took_time
    if wait_time > 0:
        #スリープでｆｐｓを調整
        #sleepは使うべきではないが、fps調整のときは許してちょ
        time.sleep(wait_time)
        
    #調整したfpsを出力。debug
    print("fps:" + str(fps))


def return_eye_place(raw_dict):
    """
    引数は辞書型(サーバから取得した生のデータ) 
    eyetribeから得た一行文辞書型のデータを受け取り、見ている位置をタプル型で返す
    """
    #引数の辞書から、生の視点座標のみを取り出す
    raw_coords = raw_dict['values']['frame']['raw']
    #タプルに変換
    x_y_tup = (raw_coords['x'],raw_coords['y'])
    return x_y_tup
    
    
def heartbeat_loop(loop_limit = None):
    """
    サーバに定期的にハートビート要求をする関数
    常時動作したいため、スレッドで並列に動作させる
    一定間隔を今のところtime.sleep(0.3)としているがこれが適切かはわからない
    """
    #サーバに投げるmessage
    #以下のURLを参照
    #http://dev.theeyetribe.com/api/
    message = """{"category": "heartbeat"}""".encode('utf-8')
    
    #引数がNoneで無限ループする。基本的にこっち
    if loop_limit is None:
        while True:
            #サーバにメッセージを投げる
            query_tracker(message)
            #ループ間隔をsleepで調整
            time.sleep(0.3)
    #引数に自然数を与えた場合、その回数だけハートビート要求を行う
    #自然数以外のものが与えられたときの挙動は知らん
    else:
        for _ in range(loop_limit):
            query_tracker(message)
            time.sleep(0.3)