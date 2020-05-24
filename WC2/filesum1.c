#include <stdio.h>

int main() {
    int x, y;
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    
    fscanf(in, "%d %d", &x, &y);
    fprintf(out, "%d\n", x+y);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
