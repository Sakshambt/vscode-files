#include <iostream>
using namespace std;

class student
{
    static int totalstudent;

public:
    int age;
    int rollno;

    student()
    {
        totalstudent++;
    }

    static int gettotalstudent()
    {
        return totalstudent;
    }
};
int student ::totalstudent = 0;

int main()
{
    student s1;
    student s2;
    //cout << student ::totalstudent << endl;
    cout << student ::gettotalstudent() << endl;
    student s3, s4, s5;
    //cout << student ::totalstudent << endl;
    cout << student ::gettotalstudent() << endl;
}