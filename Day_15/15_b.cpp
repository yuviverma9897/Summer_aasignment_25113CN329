// to rotate array left
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int first = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;

    cout << "Array afterrotating it left" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
