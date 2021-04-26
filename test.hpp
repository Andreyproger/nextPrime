#include "nextprime.hpp"

void test1()
{
    static_assert(nextPrime(88) == 89);
}

void test2()
{
    static_assert(nextPrime(999959) == 999961);
}

void test()
{
    test1();
    test2();
}
