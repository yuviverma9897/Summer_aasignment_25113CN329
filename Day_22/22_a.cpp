// to check palindrome string
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string " << endl;
    cin >> str;

    bool palindrome = true;
    int n = str.size();

    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "The string is palindrome" << endl;
    else
        cout << "The string is not palindrome" << endl;

    return 0;
}
