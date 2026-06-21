// to convert lowercase to uppercase
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

    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    cout << "The string after conversion is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << " ";
    }

    return 0;
}