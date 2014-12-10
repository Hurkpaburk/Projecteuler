int EvenFibonacciNumbers(int num) {
    int sum = 0;
    int prevNum = 1;
    int currNum = 2;
    int tmp;
    while( prevNum < num ) {
         if ((currNum % 2) == 0 ) {
            sum = sum + currNum;
        }
        tmp = prevNum;
        prevNum = currNum;
        currNum = currNum + tmp;
       
    }
    return sum;
}
