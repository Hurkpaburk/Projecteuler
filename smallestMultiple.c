#include <stdio.h>
#include <math.h>

int main() {
    
    int result = smallestMultiple(10);
    printf("Result of problem 5: %d\n",result);
    
}

int smallestMultiple(int num) {
    
    int i;
    int number = num;
    int test = 1;
    while (test != 0) {
        test = 0;    
        for (i=1;i<=num;i++) {
                //if (number%i) {
                    //printf("%d\n",number%i);
                    test = test + number%i;
                //}
                
         }
        number = number +1;
        printf("%d\n",number);

    }
    //printf("%d\n",test);
    return number;
}
