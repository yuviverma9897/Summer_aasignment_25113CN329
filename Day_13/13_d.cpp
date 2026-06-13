// to count even and odd elements
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

    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "The no of even and odd elements in the array are " << even << " and " << odd << endl;
    return 0;
}