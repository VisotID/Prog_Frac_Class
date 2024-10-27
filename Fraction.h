#pragma once
#include <string>

class Fraction
{
    private:
        int num;
        int den;
    public:
        Fraction();

        Fraction(int numinator, int denominator);

        void set_num(int numinator);

        void set_den(int denominator);

        int get_num() const;

        int get_den() const;

        std::string to_string() const;
};