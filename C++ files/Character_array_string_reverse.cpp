#include <iostream>
using namespace std;

int length(char strin[])
{
    int count = 0;
    for(int i = 0; strin[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char strin[100];
    cin.getline(strin,100);
    int n = length(strin);
    char temp;
    for(int i = 0; i<n/2; i++)
    {
        temp = strin[i];
        strin[i] = strin[n-i-1];
        strin[n-i-1]=temp;
    }
    cout<<strin<<endl;
}