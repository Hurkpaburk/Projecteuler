#include <stdio.h>

int main() {
    
    int result;
    
    result = MultiplesOfThreeAndFive(1000);
    printf("Result of problem 1: %d\n",result);
    
    result = EvenFibonacciNumbers(4000000);
    printf("Result of problem 2: %d\n",result);
    
    result = LargestPrimeFactor(600851475143);
    printf("Result of problem 3: %d\n",result);
    
    result = LargestPalindromeProduct(3);
    printf("Result of problem 4: %d\n",result);
    
    int result = SmallestMultiple(20);
    printf("Result of problem 5: %d\n",result);
    
    int result = SumSquareDifference(100);
    printf("Result of problem 6: %d\n",result);
    
    int result = StPrime(10001);
    printf("Result of problem 7: %d\n",result);
 
}
