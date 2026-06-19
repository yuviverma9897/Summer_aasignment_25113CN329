// to transpose matrices
// #include <iostream>
// using namespace std;

// int main()
// {
//     int m, n;
//     cout << "Enter the no of rows and columns in the matrix" << endl;
//     cin >> m >> n;
//     int arr[m][n];
//     cout << "Input the elements of matrix" << endl;
//     for (int i = 0; i < m; i++)
//     {
//         int a = i + 1;
//         cout << "Enter " << a << "th row" << endl;
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }

//     cout << "The transpose matrix is " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

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

    cout << "The transpose matrix is " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}