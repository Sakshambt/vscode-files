#include <iostream>
using namespace std;

class fraction
{
    int numerator;
    int denominator;

public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void simplify()
    {
        int gcd = 1;
        int m = numerator > denominator ? denominator : numerator;
        for (int i = 2; i <= m; i++)
        {
            if (denominator % i == 0 && numerator % i == 0)
            {
                gcd = i;
            }
        }
        numerator = numerator / gcd;
        denominator = denominator / gcd;
    }

    fraction plus(fraction const &f)
    {
        int num = (numerator * f.denominator) + (f.numerator * denominator);
        int lcm = denominator * f.denominator;
        fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }
    fraction operator+(fraction const &f)
    {
        int num = (numerator * f.denominator) + (f.numerator * denominator);
        int lcm = denominator * f.denominator;
        fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }

    fraction operator*(fraction const &f)
    {
        int num = numerator * f.numerator;
        int den = denominator * f.denominator;
        fraction fnew(num, den);
        fnew.simplify();
        return fnew;
    }

    bool operator==(fraction &f)
    {
        fraction e(numerator, denominator);
        e.simplify();
        f.simplify();
        return (e.numerator == f.numerator && e.denominator == f.denominator);
    }
    //pre increment
    fraction &operator++()
    {
        numerator = numerator + denominator;
        simplify();
        return *this;
    }
    //post increment
    fraction operator++(int)
    {
        fraction fnew(numerator, denominator);
        numerator = numerator + denominator;
        simplify();
        return fnew;
    }

    fraction &operator+=(fraction const &f)
    {
        int num = (numerator * f.denominator) + (f.numerator * denominator);
        int lcm = denominator * f.denominator;
        numerator = num;
        denominator = lcm
        simplify();
        return *this;
    }

    void display()
    {
        cout << numerator << " / " << denominator << endl;
    }
};

int main()
{
    fraction f1(10, 2);
    fraction f2(15, 3);

    fraction f3 = ++(++f1);
    f1.display();
    f3.display();
    // ++(++f1);
    // f1.display();

    /*
    fraction f3 = f1.plus(f2);
    fraction f4 = f1 + f2;
    fraction f5 = f1 * f2;

    f3.display();
    f4.display();
    f5.display();

    if (f1 == f2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    */
}