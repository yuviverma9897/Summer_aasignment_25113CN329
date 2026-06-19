// to add matrices
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows and the columns in both the matrices" << endl;
    cin >> m >> n;
    int arr1[m][n], arr2[m][n];
    cout << "Input the elements of 1st matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        int a = i + 1;
        cout<<"Enter "<<a<<"th row"<<endl;
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Input the elements of 2nd matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        int a = i + 1;
        cout<<"Enter "<<a<<"th row"<<endl;
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
    }

    int arr3[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "The sum of elements of matrices are " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}