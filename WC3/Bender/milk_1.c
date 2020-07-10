#include <stdio.h>

void milkCalc(int farmerQty, int amountNeeded, FILE *in, FILE *out) {
    unsigned long long amounts[farmerQty];
    unsigned long long prices[farmerQty];
    unsigned long long sum = 0;
    unsigned long long amountCheck = 0;
    
    for ( int i = 0; i < farmerQty; i++ ) {
        fscanf(in, "%llu %llu", &amounts[i], &prices[i]);
        amountCheck += amounts[i];
        if ( amounts[i] < 0 ) {
            amounts[i] = 0;
        } else if ( amounts[i] > 300000000 ) {
            amounts[i] = 300000000;
        }
        if ( prices[i] < 1 ) {
            prices[i] = 1;
        } else if ( prices[i] > 1000 ) {
            prices[i] = 1000;
        }
    }
    if ( amountCheck < amountNeeded ) {
        fprintf(out, "0\n");
        return;
    }
    for ( int i = 0; i < farmerQty; i++ ) {
        int buffer = i;
        int tempPrice = prices[i];
        int tempAmount = amounts[i];
        
        for ( int j = i + 1; j < farmerQty; j++ ) {
            if ( prices[j] < prices[buffer] ) {
                buffer = j;
            }
        }
        if ( buffer != i ) {
            prices[i] = prices[buffer];
            prices[buffer] = tempPrice;
            amounts[i] = amounts[buffer];
            amounts[buffer] = tempAmount;
        }
    }
    
    for ( int i = 0; amountNeeded > 0 && i < farmerQty; i++ ) {
        unsigned long long bufferAmount = amounts[i];
        
        if ( amountNeeded - bufferAmount > 0 ) {
            amountNeeded -= bufferAmount;
            sum += bufferAmount * prices[i];
        } else {
            sum += amountNeeded * prices[i];
            fprintf(out, "%llu\n", sum);
            return;
        }
    }
}

int main() {
    int farmerQty;
    int amountNeeded;
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    
    fscanf(in, "%d %d", &farmerQty, &amountNeeded);
    
    if ( farmerQty < 0 || amountNeeded < 0 ) {
        fprintf(out, "0\n");
    }
    if ( farmerQty > 100000000 ) {
        farmerQty = 100000000;
    }
    milkCalc(farmerQty, amountNeeded, in, out);
    
    return 0;
}
