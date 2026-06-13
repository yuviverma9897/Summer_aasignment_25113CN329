// to input and display array
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the no of elements in array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The inputed array will be" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}