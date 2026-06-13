// to find sum and avg of an array
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

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float avg = (float)sum / n;
    cout << "The sum and avg of the array elements are " << sum << " and " << avg << endl;
    return 0;
}