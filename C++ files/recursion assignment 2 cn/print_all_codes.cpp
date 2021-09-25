#include <iostream>
using namespace std;

int getCodes(string input, string output[])
{
    if (input[0] == '\0')
    {
        output[0] = "";
        return 1;
    }

    string o1[500]; //a good move think about it
    string o2[500];
    int var = getCodes(input.substr(1), o1);
    int a1 = input[0] - '0'; //converting a string into int
    char ad1 = 'a' + a1 - 1; //converting a int into its codes
    int k = 0;
    for (int i = 0; i < var; i++)
    {
        output[k] = ad1 + o1[i];
        k++;
    }
    if (input[1] != '\0') //checking for 11 second digit
    {
        int a2 = a1 * 10 + (input[1] - '0');
        if (a2 >= 10 && a2 <= 26)
        {
            int var2 = getCodes(input.substr(2), o2);
            char ad2 = 'a' + a2 - 1;
            for (int i = 0; i < var2; i++)
            {
                output[k] = ad2 + o2[i];
                k++;
            }
        }
    }
    return k;
}
//good code always remember
void getcodes1(string input, int n, string path)
{
    if (n == 0)
    {
        cout << path << endl;
        return;
    }
    int a1 = input[0] - '0';
    char ad1 = 'a' + a1 - 1;
    getcodes1(input.substr(1), n - 1, path + ad1);
    if (input[1] != '\0')
    {
        int a2 = a1 * 10 + (input[1] - '0');
        if (a2 >= 10 && a2 <= 26)
        {
            char ad2 = 'a' + a2 - 1;
            path = path + ad2;
            getcodes1(input.substr(2), n - 2, path);
        }
    }
}

// moving backwards
void getcodes(string input, int n, string path)
{
    if (n == 0)
    {
        cout << path << endl;
        return;
    }
    int a1 = input[n - 1] - '0';
    char ad1 = 'a' + a1 - 1;
    getcodes(input.substr(0, n - 1), n - 1, path + ad1);
    if ((n - 2) >= 0)
    {
        int a2 = a1 + (input[n - 2] - '0') * 10;
        if (a2 >= 10 && a2 <= 26)
        {
            char ad2 = 'a' + a2 - 1;
            path = path + ad2;
            getcodes(input.substr(0, n - 2), n - 2, path);
        }
    }
}
int main()
{
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for (int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    cout << "*******" << endl;
    getcodes(input, input.length(), "");
    return 0;
}
