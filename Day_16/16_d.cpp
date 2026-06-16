// to remove duclicates from array
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int arr2[n];
    int newSize = 0;

    for (int i = 0; i < n; i++)
    {
        bool duplicate = false;
        for (int j = 0; j < newSize; j++)
        {
            if (arr[i] == arr2[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            arr2[newSize] = arr[i];
            newSize++;
        }
    }

    cout << "Array after removing duplicates is ";
    for (int i = 0; i < newSize; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
