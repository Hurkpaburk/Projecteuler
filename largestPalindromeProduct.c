int largestPalindromeProduct(double num) {
    
    int i,j,paly;
    int min = pow(10,num-1);
    int max = pow(10,num)-1;
    
    for (i=max;i>=min;i--) {
        for (j=max;j>=i;j--) {
            if(Palindrome(i*j)) {
                if (i*j >= paly) {
                    paly = i*j;
                }
            }
        }
    }
    return paly;
}

int Palindrome(int num) {
    
    int numbers[sizeof(num)];
    int i = 0;
    while (num > 0) {
        numbers[i] = num%10;
        num = num/10;
        
        i = i+1;
    }
    printf("%d ",*numbers);
    int k;
    for (k=0;k<i;k++) {
        if (numbers[k] != numbers[i-k-1]) {
            return 0;
        }
    }
    return 1;
}
