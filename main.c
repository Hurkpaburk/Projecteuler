#include <stdio.h>

int main() {
    
    int result;
    
    result = multiplesOfThreeAndFive(1000);
    printf("Result of problem 1: %d\n",result);
    
    result = evenFibonacciNumbers(4000000);
    printf("Result of problem 2: %d\n",result);
    
    result = largestPrimeFactor(600851475143);
    printf("Result of problem 3: %d\n",result);
    
}