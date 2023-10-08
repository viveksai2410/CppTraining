/*
    For developers who will use this librray for mathematical computation
*/
#include <iostream>

float square(float number)
{
    return number * number;
}

float percentag(float number, float pct_factor)
{
    return number * (pct_factor / 100);
}

float cube(float number)
{
    return number * number * number;
}

int factorial(int number)
{
    if (number < 0)
    {
        throw std::runtime_error("Negative number problem");
    }
    else if (number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}