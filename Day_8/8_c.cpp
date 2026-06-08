// to print character right triangle
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the height " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}