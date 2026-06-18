// selection sort
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int minInd = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minInd])
            {
                minInd = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minInd];
        arr[minInd] = temp;
    }

    cout << "Sorted array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
