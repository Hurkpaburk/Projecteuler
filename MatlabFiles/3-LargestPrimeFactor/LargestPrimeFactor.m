% The prime factors of 13195 are 5, 7, 13 and 29.
% 
% What is the largest prime factor of the number 600851475143 ?


PrimeSerie = [2 3];

NumberToDivide = 600851475143;
ReducedNumber = NumberToDivide;
factors = [];
DONE = 0;
i = 0;
while DONE == 0;
    i = i+1;
    Prime = PrimeSerie(i);
    if mod(ReducedNumber,Prime)==0 % Factor identified
        ReducedNumber = ReducedNumber/Prime
        disp([num2str(Prime) ' is a factor of ' num2str(NumberToDivide)])
        factors(end+1) = Prime;
        if sum(ReducedNumber==PrimeSerie) == 1 || ReducedNumber == 1
            % Reduced number is a prime => Done
            DONE = 1;
        else
            % The reduced number not a prime so start over to reduce the
            % new number
            i = 0;
        end
    end
    
    if i == length(PrimeSerie)
        % The end of the known primes are reached. Add one more.
        PrimeSerie = OneMorePrimePlease( PrimeSerie );
    end

end

factors
