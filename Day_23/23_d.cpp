// to find max occuring character
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string" << endl;
    cin >> str;

    int freq[256] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        freq[(int)str[i]]++;
    }

    int maxFreq = 0;
    char maxChar = '\0';
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    if (maxChar != '\0')
        cout << "Maximum occurring character is " << maxChar
             << " with frequency " << maxFreq << endl;
    else
        cout << "No characters found" << endl;

    return 0;
}
