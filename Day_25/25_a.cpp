// to merge two sorted arrays
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter size of first and second array" << endl;
    cin >> n >> m;

    vector<int> arr1(n), arr2(m);
    cout << "Enter elements of first sorted array" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    cout << "Enter elements of second sorted array" << endl;
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    vector<int> merge;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            merge.push_back(arr1[i]);
            i++;
        }
        else
        {
            merge.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n)
    {
        merge.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        merge.push_back(arr2[j]);
        j++;
    }

    cout << "Merged sorted array ";
    for (int x : merge)
        cout << x << " ";
    cout << endl;

    return 0;
}
