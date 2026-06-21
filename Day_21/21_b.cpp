// to reverse a string
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of string" << endl;
    cin >> n;

    vector<char> str(n);
    cout << "Enter the elements of the string" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    cout << "String after reversing will be" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << str[i];
    }

    return 0;
}