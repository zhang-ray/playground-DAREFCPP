
void selfAddSub(int argc) {
    int nVarOne = argc;
    int nVarTwo = argc;
    nVarTwo = 5 + (nVarOne++);
    nVarTwo = 5 + (++nVarOne);

    nVarOne = 5 + (nVarTwo--);
    nVarOne = 5 + (--nVarTwo);
}


int main(void){
    selfAddSub(33);
    return 0;
}