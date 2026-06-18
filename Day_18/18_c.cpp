// binary search
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the sorted elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search " << endl;
    cin >> key;

    int low = 0, high = n - 1;
    int mid;
    bool found = false;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            cout << "Element found at index value " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (!found)
    {
        cout << "Element not foun." << endl;
    }

    return 0;
}
