
void sub(int argc) {
    int nVarOne = argc;
    int nVarTwo = argc;
    nVarOne = nVarOne - 100;
    nVarOne = nVarOne + 5 - nVarTwo;
}

int main(void) {
    sub(3);
    return 0;
}