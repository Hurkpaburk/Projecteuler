
% 
% 2520 is the smallest number that can be divided by each of the numbers from
% 1 to 10 without any remainder.
% 
% What is the smallest positive number that is evenly divisible by all of the
% numbers from 1 to 20?



Done = 0;
Num = 1;
MaxDivisor = 20;
Step = 1
Primes = [1 2 3 5 7 11 13 17 19];
PrimeIndex = 1;

while Done == 0
    Num = Num+Step
    for i = 1:1:MaxDivisor
        i
        if mod(Num,i) == 0
            if i == MaxDivisor
                disp(num2str(Num));
                Done = 1;
            else
                if i >= Primes(PrimeIndex+1)
                    PrimeIndex = PrimeIndex + 1;
                    Step = prod(Primes(1:PrimeIndex)); 
                end
                continue
            end
        else
            break
        end
    end
end