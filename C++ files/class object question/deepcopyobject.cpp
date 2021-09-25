#include <iostream>
using namespace std;
#include <cstring>
#include "deepcopyoops.cpp"

int main()
{
    student s1(100, "abc");
    student s2(101, "xyz");
    s1.display();
    s2.display();
}