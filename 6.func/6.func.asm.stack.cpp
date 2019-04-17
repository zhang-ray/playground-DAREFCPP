#include <stdio.h>
#include <tchar.h>

void asmStack(int argc)
{
    __asm push eax
    if (argc > 0) {
        __asm pop eax
    }
    int nVar = 0;

    //scanf("%d", &nVar);
    printf("AsmStack %\r\n", nVar);
}


int _tmain(int argc, _TCHAR *argv[]) {
    asmStack(-3);
    return 0;
}
