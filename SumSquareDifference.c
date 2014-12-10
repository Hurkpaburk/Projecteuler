int SumSquareDifference(int num) {
    
    int i;
    int sumSquare = 0;
    int squareSum = 0;
    
    for (i=1;i<=num;i++) {
        sumSquare += pow(i,2);
        squareSum += i;
        }
    squareSum = pow(squareSum,2);
    int number = squareSum - sumSquare;
    return number;
}
