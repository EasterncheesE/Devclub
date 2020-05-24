void strCopy(char target[], char source[]) {
    int counter = 0;
    
    for ( ; source[counter] != '\0'; counter++ ) {
        target[counter] = source[counter];
    }
    target[counter] = '\0';
}
