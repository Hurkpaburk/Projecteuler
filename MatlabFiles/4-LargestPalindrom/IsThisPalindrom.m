function Reply = IsThisPalindrom(Number)
%ISTHISPALINDROM Summary of this function goes here
%   Detailed explanation goes here

NumberStr = num2str(Number);
Reply = strcmp(NumberStr,fliplr(NumberStr));
end