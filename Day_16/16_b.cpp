// to find max freq of Elm
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 2, 3, 4, 3, 5, 2, 2};

    int n = arr.size();
    int maxFreq = 0;
    int maxElm = arr[0];

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxFreq)
        {
            maxFreq = count;
            maxElm = arr[i];
        }
    }

    cout << "Elm with maximum frequency is " << maxElm << endl;
    cout << "And its frequency is " << maxFreq << endl;

    return 0;
}
