// to find duplicates in array
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the no of elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Duplicate elements in the array are" << endl;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (!found)
    {
        cout << "No duplicate elements found" << endl;
    }

    return 0;
}
