#include <iostream>
using namespace std;

#include "template_intro_class.cpp"

int main()
{
    Pair<Pair<Pair<int, int>, int>, double> p1;
    Pair<Pair<int, int>, int> p2;
    Pair<int, int> p3;

    p1.sety(2.4);
    p3.setx(5);
    p3.sety(7.8);
    p2.setx(p3);
    p2.sety(4.5);
    p1.setx(p2);
    cout << p1.getx().getx().getx() << endl;
    cout << p1.getx().getx().gety() << endl;
    cout << p1.getx().gety() << endl;
    cout << p1.gety() << endl;
}