#include <fibonacci.hpp>

using namespace std;

Fibonacci::Fibonacci(int n) : number(n)
{
}

Fibonacci::~Fibonacci()
{
}

unsigned long long Fibonacci::getResult()
{
    return Fibonacci::calcFibonacci(this->number);
}

unsigned long long Fibonacci::calcFibonacci(int n)
{

    bool first_mult = true;

    // Instantiating 2 Pair objects to represent value and result in squareting
    Pair r(1, 0);
    Pair x(1, 0);

    // Some initial values
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    // n is never really used here, because we break at line 51 to prevent another operation
    while (n)
    {
        // Check if least significant bit is 1
        if (n & 1)
        {
            // Checking if it's the first time we will change r.
            if (first_mult)
            {
                r = x;
                first_mult = false;
            }
            else
            {
                r = x * r;
            }
        }

        // Breaking here prevent one extra square operation
        if (!n)
            break;

        // Square Pair x.
        x = x.square();

        // Shift one bit to right.
        n = n >> 1;
    }

    // Return the result which is on result a member(r.a).
    return r.a;
}