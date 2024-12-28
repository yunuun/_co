#include <stdio.h>

int mult(int R1){
    int i = 1;
    int R0 = 2;
    int R2 = 0;
LOOP:
    if(i>R1) goto END;//JGT
    R2 = R2 + R0;
    i++;

    goto LOOP;

END:
    return R2;
}

