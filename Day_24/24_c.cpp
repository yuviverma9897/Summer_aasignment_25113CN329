// to find longest word
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a sentence" << endl;
    getline(cin, str);

    string word = "", longest = "";
    int maxLength = 0;

    for (int i = 0; i <= str.size(); i++)
    {
        if (i < str.size() && str[i] != ' ')
        {
            word.push_back(str[i]);
        }
        else
        {
            if (word.size() > maxLength)
            {
                maxLength = word.size();
                longest = word;
            }
            word = "";
        }
    }

    if (!longest.empty())
        cout << "Longest word is " << longest << " with length " << maxLength << endl;
    else
        cout << "No words found" << endl;

    return 0;
}
