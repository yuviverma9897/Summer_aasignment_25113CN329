// to implement linear search on an array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    cout << "Input the array elements" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element u want to search" << endl;
    cin >> key;

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            ans = i;
            break;
        }
    }

    if (ans == -1)
    {
        cout << "Your element " << key << " does not found in the array." << endl;
    }
    else
    {
        cout << "The index value of " << key << " in the array is " << ans << endl;
    }
    return 0;
}