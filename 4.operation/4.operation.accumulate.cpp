
int accumulation(int nNumber) {
    // nNumber && (nNumber += Accumulation(nNumber - 1));

    (nNumber == 0) || (nNumber += accumulation(nNumber - 1));
    return  nNumber;
}


int main(void) {
    accumulation(33);
    return 0;
}