// to find column wise sum
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows and columns in the matrix" << endl;
    cin >> m >> n;
    int arr[m][n];
    cout << "Input the elements of matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        int a = i + 1;
        cout << "Enter " << a << "th row" << endl;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int a = i + 1;
        cout << "The sum of elements of column " << a << " is ";
        for (int j = 0; j < m; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }

    return 0;
}