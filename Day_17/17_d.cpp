// to find common elements
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the no of elements of 1st and 2nd array" << endl;
    cin >> n >> m;

    vector<int> arr1(n);
    vector<int> arr2(m);
    cout << "Enter the elements of 1st array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of 2nd array" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    vector<int> arr3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                int ele;
                ele = arr2[j];
                arr3.push_back(ele);
            }
        }
    }

    if (arr3.size() == 0)
    {
        cout << "No common elements exists" << endl;
    }
    else
    {
        cout << "Common elements are " << endl;
        for (int i = 0; i < arr3.size(); i++)
        {
            cout << arr3[i] << " ";
        }
    }

    return 0;
}