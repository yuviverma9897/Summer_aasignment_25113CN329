// to find frequency of an element in an array
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
    cout << "Enter the element u want to find thr frequency of" << endl;
    cin >> key;

    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            a++;
        }
    }

    cout << "The frequency of " << key << " is " << a << endl;
    return 0;
}