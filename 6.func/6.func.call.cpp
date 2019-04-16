#include <stdio.h>



typedef void(*p)();

void __stdcall showStd(int nNumber) {
    printf("%d \r\n", nNumber);
}

void __cdecl showCde(int nNumber) {
    printf("%d \r\n", nNumber);
}

void __fastcall showFast(int nOne, int nTwo, int nThree, int nFour) {
    printf("%d %d %d %d\r\n", nOne, nTwo, nThree, nFour);
}




void inNumber() {
    int nInt = 1;
    scanf("%d", &nInt);
    char cChar = 2;
    scanf("%c", &cChar);

    printf("%d %c\r\n", nInt, cChar);
}


void addNumber(int nOne) {
    nOne += 1;
    printf("%d \r\n", nOne);
}


int getAddr(int nNumber) {
    int nAddr = *(int*)(&nNumber - 1);
    return nAddr;
}


struct tagTEST {
    int m_nOne;
    int m_nTwo;
};



tagTEST retStruct() {
    tagTEST testRet;
    testRet.m_nOne = 1;
    testRet.m_nTwo = 2;
    return testRet;
}

void asmStack() {
    __asm {
        push eax
        pop eax
    }
    int nVar = 0;
    scanf("%d", &nVar);
    printf("AsmStack %\r\n", nVar);
}



void main() {
    //asmStack();

    tagTEST test;
    test = retStruct();
    int nAddr = getAddr(1);
    int nReload = (nAddr + *(int *)(nAddr - 4)) - (int)getAddr;

    int nNumber = 0;
    scanf("%d", &nNumber);
    addNumber(nNumber);

    showStd(5);
    showCde(5);
    showFast(1, 2, 3, 4);

    printf("Hello ");
    printf("World");
    printf(" C++");
    printf("\r\n");

    inNumber();
}
