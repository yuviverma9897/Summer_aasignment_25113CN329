// to find pair with given sum
#include <iostream>
using namespace std;

int main()
{
    int n, target;
    cout << "Enter size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter sum: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "The pair is " << arr[i] << " and " << arr[j] << "." << endl;
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "No pair found with sum " << target << endl;
    }

    return 0;
}
