//O(logN)

int fn() {
    for ( int i = 1; i < N; i *= 3 );
    return i;
}

int fn(int i) {
    if ( i < 10000 ) {
        return fn(i*3);
    }
    return i;
}

int fn() {
    for ( int i = 1; i < N; i << 1 );
    return i;
}

int fn() {
    for ( int i = 1, base = 3; i < N; i *= base );
    return i;
}

int fn() {
    for ( int i = 0; i < 100; i++ ) {
        i *= 2;
    }
    return 0;
}