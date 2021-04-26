#include <math.h>

typedef unsigned int PrimeNumType;

constexpr bool isPrime(PrimeNumType number)
{
    for(int i = 2; i <= ceil(std::sqrt(number)); i++)
    {
        if(number % i == 0)
            return false;
    }
    return true;
}

constexpr PrimeNumType nextPrime(PrimeNumType num)
{
    do
    {
        num++;
    }
    while(isPrime(num)==false);
    return num;
}
