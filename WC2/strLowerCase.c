void strLowerCase(char str[]) {
    for ( char *p = str; *p != '\0'; p++ ) {
        if ( *p >= 65 && *p <= 90 ) {
            *p += 32;
        }
    }
}
