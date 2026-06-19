// to find diagnol sum
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of rows in the matrix" << endl;
    cin >> n;
    int arr[n][n];
    cout << "Input the elements of matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        int a = i + 1;
        cout<<"Enter "<<a<<"th row"<<endl;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }

    cout << "The sum of diogonal elements is " << sum << endl;

    return 0;
}