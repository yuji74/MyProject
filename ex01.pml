mtype = {F, S, W};
mtype turn = F;

active proctype Producer()
{
    do
        :: (turn == F) -> printf("Producer\n"); turn = S;
    od
}

active proctype Consumer()
{
    do
        :: (turn == S) -> printf("Consumer\n"); turn = W;
    od
}

active proctype Jolno()
{
    do
        :: (turn == W) -> printf("Jolno"); turn = F
    od
}
