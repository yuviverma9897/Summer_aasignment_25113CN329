// to check anagram strings
#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter first string ";
    cin >> str1;
    cout << "Enter second string ";
    cin >> str2;

    if (str1.size() != str2.size())
    {
        cout << "Strings are not anagrams" << endl;
        return 0;
    }

    int freq1[256] = {0};
    int freq2[256] = {0};

    for (int i = 0; i < str1.size(); i++)
    {
        freq1[(int)str1[i]]++;
        freq2[(int)str2[i]]++;
    }

    bool anagram = true;
    for (int i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "Strings are anagrams" << endl;
    else
        cout << "Strings are not anagrams" << endl;

    return 0;
}
