// to find common characters in strings
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter first string " << endl;
    cin >> s1;
    cout << "Enter second string " << endl;
    cin >> s2;

    int freq1[256] = {0};
    int freq2[256] = {0};

    for (char c : s1)
        freq1[(int)c]++;
    for (char c : s2)
        freq2[(int)c]++;

    vector<char> common;
    for (int i = 0; i < 256; i++)
    {
        if (freq1[i] > 0 && freq2[i] > 0)
        {
            common.push_back((char)i);
        }
    }

    if (common.empty())
    {
        cout << "No common characters";
    }
    else
    {
        cout << "Common characters ";
        for (char c : common)
            cout << c << " ";
    }
    cout << endl;

    return 0;
}
