#include <stdio.h>

#define MAX 1001

int main() {
    unsigned long long array[MAX];
    unsigned long long farmerQty, amountNeeded;
    unsigned long long tempAmount, tempPrice;
    unsigned long long result = 0;
    unsigned long long qtyCheck = 0;
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    
    fscanf(in, "%llu %llu", &farmerQty, &amountNeeded);
    if ( farmerQty <= 0 || amountNeeded <= 0 ) {
        fprintf(out, "0\n");
        return 0;
    }
    if ( farmerQty > 100000000 ) {
        farmerQty = 100000000;
    }
    if ( amountNeeded > 300000000 ) {
        amountNeeded = 300000000;
    }
    
    for ( int i = 0; i < MAX; i++ ) {
        array[i] = 0;
    }
    
    for ( ; fscanf(in, "%llu %llu", &tempAmount, &tempPrice) != EOF; ) {
        if ( tempAmount < 1 ) {
            tempAmount = 0;
        } else if ( tempAmount > 300000000 ) {
            tempAmount = 300000000;
        }
        if ( tempPrice < 1 ) {
            tempPrice = 1;
        } else if ( tempPrice > 300000000 ) {
            tempPrice = 30000000;
        }
        printf("tempA = %llu, tempP = %llu\n", tempAmount, tempPrice);
        qtyCheck += tempAmount;
        array[tempPrice] += tempAmount;
    }
    if ( qtyCheck < amountNeeded ) {
        fprintf(out, "0\n");
        return 0;
    }
    for ( int i = 0; i < 26; i++ ) {
        printf("i[%d] = %d\n", i, array[i]);
    }
    printf("\n");
    for ( int i = 1; amountNeeded > 0; i++ ) {
        unsigned long long bufferAmount = array[i];

        printf("aneed = %llu, buff = %llu, Result = %llu, i[%d] = %llu\n", amountNeeded, bufferAmount, result, i, array[i]);
        if ( amountNeeded >= bufferAmount ) {
            amountNeeded -= bufferAmount;
            result += bufferAmount * i;
        printf("FIRST CASE, aneed = %llu, buff = %llu, Result = %llu, i[%llu] = %llu\n", amountNeeded, bufferAmount, result, i, array[i]);
        } else {
            result += (amountNeeded * i);
            amountNeeded = 0;
            printf("second case\n");
        }
    }
    
    fprintf(out, "%llu\n", result);
    return 0;
}
