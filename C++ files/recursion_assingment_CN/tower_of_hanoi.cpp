#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void towerOfHanoi(int n, char source, char aux, char des)
{
    if (n == 1)
    {
        cout << source << des << endl;
        return;
    }
    towerOfHanoi(n - 1, source, des, aux);
    cout << source << des << endl;
    towerOfHanoi(n - 1, aux, source, des);
}

int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
    return 0;
}