void strRot13(char str[]) {
    for ( char *p = str; *p != '\0'; p++ ) {
        if ( *p > 64 && *p < 78 ) {
            *p += 13;
        } else if ( *p > 96 && *p < 110 ) {
            *p += 13;
        } else if ( *p > 77 && *p < 91 ) {
            *p -= 13;
        } else if ( *p > 109 && *p < 123 ) {
            *p -= 13;
        }
    }
}
