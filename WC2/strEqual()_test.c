int strEqual(char str1[], char str2[]) {
    int counter = 0;
    
    for ( ; str1[counter] == str2[counter]; counter++ ) {
        if ( str1[counter] != '\0' && str2[counter] != '\0' ) {
            return 1;
        }
    }
    return 0;
}
