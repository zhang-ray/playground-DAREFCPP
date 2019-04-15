#include <stdio.h>

void div(int argc) {
    int nVarOne = argc;
    int nVarTwo = argc;

    printf("nVarOne / nVarTwo = %d", nVarOne / nVarTwo);
    printf("nVarOne / 2 = %d", nVarOne / 2);
    printf("nVarTwo / 7 = %d", nVarTwo / 7);
    printf("nVarTwo % 7 = %d", nVarTwo % 7);
    printf("nVarOne / 8 = %d", nVarOne / 8);
    printf("nVarOne / 14 = %d", argc / 14);
}

int main(void) {
    div(20);
    return 0;
}