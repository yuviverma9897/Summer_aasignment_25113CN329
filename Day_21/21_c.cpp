// to count vowels and consonent
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
    int vow = 0, cons = 0;
    for (int i = 0; i < n; i++)
    {
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vow++;
            break;

        default:
            if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            {
                cons++;
            }
        }
    }

    cout << "The count of vowels and consonents in the string is " << vow << " and " << cons;
    return 0;
}