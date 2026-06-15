// to move zeros to end
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[pos++] = arr[i];
        }
    }
    while (pos < n)
    {
        arr[pos++] = 0;
    }

    cout << "Array after moving zeroes to end" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}