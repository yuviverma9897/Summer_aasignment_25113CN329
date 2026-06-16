// to find missing no in an array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array including missing no " << endl;
    cin >> n;

    vector<int> arr(n - 1);
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    int totalSum = n * (n + 1) / 2;

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    int misNum = totalSum - sum;
    cout << "Missing number is " << misNum << endl;

    return 0;
}
