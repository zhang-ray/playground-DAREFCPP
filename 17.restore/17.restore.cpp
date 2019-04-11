#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <chrono>
#include <thread>

extern "C" void funcToUpper(char *);

int main(void) {
    char szBuff[256] = { 0 };
    printf("input: ");
    scanf("%255s", szBuff);

    funcToUpper(szBuff);
    printf("result: %s\n", szBuff);

    std::this_thread::sleep_for(std::chrono::seconds(1));

    return 0;
}

