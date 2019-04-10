#include <stdio.h>
#include <Windows.h>

int main(int argc, char *argv[]) {
    float theFloat = (float)argc;
    printf("%f\n", theFloat);

    argc = (int) theFloat;
    printf("%d\n", argc);

    return 0;
}