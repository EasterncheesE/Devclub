// TOO LONG, BUT IS GOOD

#include <stdio.h>

void fileSum(FILE * out,int x, int y) {
    fprintf(out, "%d\n", x + y);
}

int main() {
    int x, y;
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    fscanf(in, "%d %d", &x, &y);
    
    fileSum(out, x, y);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
