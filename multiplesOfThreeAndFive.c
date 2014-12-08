int multiplesOfThreeAndFive(int num)
{
    int sum = 0;
    int i;
    for(i = 0; i < num; i++) {
        if ((i % 3) == 0 || (i % 5) == 0 ) {
            sum = sum + i;
        }
    }
    return sum;
}

