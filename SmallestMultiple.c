#include <stdio.h>
#include <math.h>

int SmallestMultiple(int num) {
    
    int i;
    int number = num;
    int test = 1;
    while (test != 0) {
        test = 0;
        number = number +1;
        for (i=1;i<=num;i++) {
                    test += number%i;
         }
    }
    return number;
}
