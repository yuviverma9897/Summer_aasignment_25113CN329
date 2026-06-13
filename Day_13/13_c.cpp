// to find largest and smallest element
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

    int largest = arr[0], smallest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "The smallest and the largest elements of the array are " << smallest << " and " << largest << endl;
    return 0;
}