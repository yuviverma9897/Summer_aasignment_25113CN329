// to print a character pyramid
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the height " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + n - i; j++)
        {
            cout << " ";
        }
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j;
        }
        for (int j = 1; j < i; j++)
        {
            char ch = 'A' + i - j - 1;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}