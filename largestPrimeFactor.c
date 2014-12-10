int LargestPrimeFactor(long num) {
    
    int i;
    
    for(i = 2;i < num/2;i++) {
        if (i % 2 != 0) {
            if  (num % i == 0) {
                num = num / i;
            }
        }
        
    }
 return num;
}
