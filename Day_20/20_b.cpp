// to check symmetric matrix
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of rows of the square matrix" << endl;
    cin >> n;
    int arr[n][n];
    cout << "Input the elements of matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        int a = i + 1;
        cout << "Enter " << a << "th row" << endl;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool symmetric = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                symmetric = false;
                break;
            }
        }
    }

    if (symmetric)
    {
        cout << "Matrix is symmetric" << endl;
    }
    else
    {
        cout << "Matrx is asymmetric" << endl;
    }

    return 0;
}