#include <stdio.h>

void mul(int argc){
    int nVarOne = argc;
    int nVarTwo = argc;

    printf("nVarOne * 15 = %d", nVarOne * 15);
    printf("nVarOne * 16 = %d", nVarOne * 16);
    printf("2 * 2 = %d", 2 * 2);
    printf("nVarTwo * 4 + 5 = %d", nVarTwo * 4 + 5);
    printf("nVarTwo * 9 + 5 = %d", nVarTwo * 9 + 5);
    printf("nVarOne * nVarTwo = %d", nVarOne * nVarTwo);
}

int main(void) {
    mul(3);
    return 0;
}