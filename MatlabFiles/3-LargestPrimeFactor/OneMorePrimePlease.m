function [ PrimeSerieNew ] = OneMorePrimePlease( PrimeSerie )
%ONEMOREPRIMEPLEASE Summary of this function goes here
%   Detailed explanation goes here

if length(PrimeSerie) < 3
PrimeSerie = [2 3];
end

PrimeSerieNew = PrimeSerie;

for NewNumber = PrimeSerie(end):PrimeSerie(end)+100000
    NewNumber;
    NoOfPrimes = length(PrimeSerie);
    for j = 1:NoOfPrimes
        if mod(NewNumber,PrimeSerie(j)) == 0
            % disp('Not a Prime')
            break % It is not a prime
        elseif j == NoOfPrimes
            % disp('Prime identified')
            % number is not dividable with any prime => New Prime identified
            PrimeSerieNew(end+1) = NewNumber;
            return
        end
    end
end

end

