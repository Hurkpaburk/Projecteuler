#include <stdio.h>
#include <math.h>
#include <string.h>

int StPrime(int num) {
    
    int i;
    int j = 3;
    
    int primes[num];
    for (i=0;i<num;i++) {
        primes[i] = 0;
    }
    
    primes[0] = 2;
    primes[1] = 3;
    i = 1;
    int k, flag;
    while (i != num) {
        j = j+2;
        flag = 0;
        for (k=0;k<i;k++) {
            if (j%primes[k] == 0) {
                flag = 1;
            }
        }
        if (flag == 0) {
            primes[i] = j;
            i = i+1;
        }
    }
    return primes[num-1];
}
