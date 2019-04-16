#include <stdio.h>


void funcIf(int argc) {
    if (argc == 0) {
        printf("%d \r\n", argc);
    }
    if (argc > 0) {
        printf("argc >= 0");
    }

    return;
}


void funcIfElse(int argc) {
    if (argc == 0) {
        argc = 5;
    }
    else {
        argc = 6;
    }
    printf("%d \r\n", argc);
}


void funcIfElseIf(int argc) {
    argc = 0;
    if (argc > 0) {
        printf("argc > 0");
    }
    else if (argc == 0) {
        printf("argc == 0");
    }
    else {
        printf("argc <= 0");
    }
}



int funcGoToDo(int nCount) {
    int nSum = 0;
    int nIndex = 0;
GOTO_DO:
    nSum += nIndex;
    nIndex++;
    if (nIndex <= nCount) {
        goto GOTO_DO;
    }
    return nSum;
}



int funcLoopDO(int nCount) {
    int nSum = 0;
    int nIndex = 0;
    do {
        nSum += nIndex;
        nIndex++;
    } while (nIndex <= nCount);
    return nSum;
}


int funcLoopWhile(int nCount) {
    int nSum = 0;
    int nIndex = 0;
    while (nIndex <= nCount) {
        nSum += nIndex;
        nIndex++;
    }
    return nSum;
}


int funcLoopFor(int nCount) {
    int nSum = 0;
    for (int nIndex = 0; nIndex <= nCount; ++nIndex) {
        nSum += nIndex;
    }
    return nSum;
}



int funcCodePick(int nCount) {
    int nSum = 0;
    int nIndex = 0;
    do {
        nSum += nIndex;
        nIndex++;
    } while (nIndex < nCount - 1);
    return nSum;
}




void funcDoRate(int argc) {
    int t = 0;
    int i = 0;
    while (t < argc) {
        t = i * 99;
        i++;
    }
    printf("%d", t);
}

void funcSwitchIf() {
    int i = 1;
    scanf("%d", &i);
    switch (i) {
    case 1:
        printf("i == 1");
        break;
    case 3:
        printf("i == 3");
        break;
    case 100:
        printf("i == 100");
        break;
    }
}


void funcSwitchLine() {
    int nIndex = 0;
    scanf("%d", &nIndex);
    switch (nIndex) {
    case 1:
        printf("nIndex == 1");
        break;
    case 2:
        printf("nIndex == 2");
        break;
    case 3:
        printf("nIndex == 3");
        break;
    case 5:
        printf("nIndex == 5");
        break;
    case 6:
        printf("nIndex == 6");
        break;
    case 7:
        printf("nIndex == 7");
        break;
    }
}


void funcSwitchNonline() {
    int i = 0;
    scanf("%d", &i);
    switch (i) {
    case 1:
        printf("i == 1");
        break;
    case 2:
        printf("i == 2");
        break;
    case 3:
        printf("i == 3");
        break;
    case 5:
        printf("i == 5");
        break;
    case 6:
        printf("i == 6");
        break;
    case 15:
        printf("i == 15");
        break;
    }
}



void funcSwitchTree() {
    int i = 8;
    scanf("%d", &i);
    switch (i) {
    case 2:
        printf("i == 2\n");
        break;
    case 3:
        printf("i == 3\n");
        break;
    case 8:
        printf("i == 8\n");
        break;
    case 10:
        printf("i == 10\n");
        break;
    case 35:
        printf("i == 35\n");
        break;
    case 37:
        printf("i == 37\n");
        break;
    case 666:
        printf("i == 666\n");
        break;
    case 10000:
        printf("i == 10000\n");
        break;
    default:
        printf("default\n");
        break;
    }
}



int main(int argc, char** argv) {
    {
        int a = 7;
        int b = !!a;

        printf("%f", 10);
        funcIf(argc);
        funcIfElse(argc);
        funcIfElseIf(argc);
    }

    {
        printf("%d \r\n", funcGoToDo(5));
        printf("%d \r\n", funcLoopDO(5));
        printf("%d \r\n", funcLoopWhile(5));
        printf("%d \r\n", funcLoopFor(5));
        printf("%d \r\n", funcCodePick(5));
        funcDoRate(argc);
    }

    {
        funcSwitchLine();
        funcSwitchIf();
        funcSwitchNonline();
        funcSwitchTree();
    }


    return 0;
}