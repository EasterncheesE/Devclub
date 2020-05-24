int fn() {
    for ( int i = 0; i < N; i++) {
        for ( int j = i * 2; j < N; j *= 2 );
    }
    return i;
}

int fn(int i) {
    if ( i <= 0 ) {
        return 1;
    }
    return fn(i/2) + fn(i-1);
}

int fn() {
    for ( int i = 0; i < N; i++ ) {
        return fn(i*2);
        }
}
