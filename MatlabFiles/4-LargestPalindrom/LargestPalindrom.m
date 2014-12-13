

% 
% A palindromic number reads the same both ways. The largest palindrome made
% from the product of two 2-digit numbers is 9009 = 91 × 99.
% 
% Find the largest palindrome made from the product of two 3-digit numbers.
clear all

Num1 = 999;
Num2 = 999;

Done = 0;

HighestPalindrom = 2;

while Done == 0
    
    Result = Num1*Num2;
    if IsThisPalindrom(Result) && Result > HighestPalindrom
        HighestPalindrom = Result;
        fprintf([num2str(Result) ' = ' num2str(Num1) ' x ' num2str(Num2) '\n']);
    end
    
    if Result < HighestPalindrom && Num1 == 999
        fprintf([num2str(HighestPalindrom) ' is the highest palindrom' '\n']);
        fprintf(['Stopped at ' num2str(Num1) ' and ' num2str(Num2) '\n']);
        Done = 1;
    end
    
    if Num1 == Num2 || Result < HighestPalindrom
        Num2 = Num2 -1;
        Num1 = 999;
    else
        Num1 = Num1 - 1;
    end
    
end