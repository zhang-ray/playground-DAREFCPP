int bitOperation(int argc) {
    unsigned int nVar = argc;
    nVar <<= 3;
    nVar >>= 5;

    argc = argc << 3;
    argc = argc >> 5;
    argc = argc | 0xFFFF0000;
    argc = argc & 0x0000FFFF;
    argc = argc ^ 0xFFFF0000;
    argc = ~argc;

    return argc;
}


int main(void) {
    bitOperation(33);
    return 0;
}