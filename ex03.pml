mtype = {F, S};
mtype turn = F;

int t = 0;

ltl p0 {[](t == 123)}

active proctype Producer()
{
    do
        :: (turn == F) -> printf("Producer\n"); turn = S;
    od
}

active proctype Consumer()
{
    do
        :: (turn == S) -> printf("Consumer\n"); turn = F;
    od
}
