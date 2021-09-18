#include <iostream>
using namespace std;

int main()
{
    int a[10];
    cout << &a << endl;
    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << p[1] << endl; 
}
