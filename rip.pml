c_state "int temp" "Hidden";

active proctype Proc() {
    int a = 0;
    do
    :: (a < 5) -> atomic{c_code{temp++;};printf("Proc: %d\n", a);a++}
    :: else -> atomic{printf("Proc: %d\n", a);break}
    od
}

never {
    c_code{temp = 0;}
T0_init:
        do
        :: c_expr{temp > 5 || (0 * printf("never: %d\n", temp))} -> goto accept_S4
        :: (1) -> goto T0_init
        od;
accept_S4:
        do
        :: (c_expr{temp == 2}) -> atomic{
            printf("never end\n");
            goto accept_S4
        }
        od;
}
