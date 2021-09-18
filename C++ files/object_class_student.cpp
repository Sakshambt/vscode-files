#include <iostream>
using namespace std;

#include "student.cpp"

int main()
{
    student s1;
    student *s2 = new student;

    s1.display();
    s2->display();

    student s3(20);
    s3.display();

    student s4(20, 34);
    s4.display();
}