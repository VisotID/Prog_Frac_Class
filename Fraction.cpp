#include <string>
#include "Fraction.h"

Fraction::Fraction()
{
    num = 0;
    den = 1;
}

Fraction::Fraction(int numinator, int denominator)
{
    set_num(numinator);
    set_den(denominator);
}

void Fraction::set_num(int numinator)
{
    num = numinator;
}

void Fraction::set_den(int denominator)
{
    if (denominator!=0)
    {
        den = denominator;
    }
    else den = 1;
}

int Fraction::get_num() const
{
    return num;
}

int Fraction::get_den() const
{
    return den;
}

std::string Fraction::to_string() const
{
    std::string s = std::to_string(num) + "/" + std::to_string(den);
    return s;
}

