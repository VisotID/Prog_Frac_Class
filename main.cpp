#include <iostream>
#include "Fraction.h"

using namespace std;

void print_frac(const Fraction &Fract)
{
    cout << Fract.to_string() << "\n";
}

int main()
{
    Fraction First;
    print_frac(First);
    cout << "\n";


    First.set_num(4);
    cout << First.get_num() << "\n";
    print_frac(First);
    cout << "\n";

    Fraction Second[5];
    Second[2].set_den(6);
    for (int i = 0; i < 5; i++)
    {
    print_frac(Second[i]);
    }
    cout << "\n";

    Fraction* Third = new Fraction[4];
    Third[1].set_num(90);
    for (int i = 0; i < 4; i++)
    {
    print_frac(Third[i]);
    }
    delete[] Third;
    cout << "\n";

    Fraction* Fourth[3];
    for (int i = 0; i < 3; i++)
    {
        Fourth[i] = new Fraction(5, 9);
        cout << Fourth[i] -> to_string() << "\n";
    }
    for (int i = 0; i < 3; i++)
    {
        delete Fourth[i];
    }



    return 0;
}