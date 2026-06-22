// to count words in the sentence
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the sentence" << endl;
    getline(cin, str);

    int words = 0;
    bool inWord = false;

    for (int i = 0; i < str.size(); i++)
    {
        if (isspace(str[i]))
        {
            inWord = false;
        }
        else
        {
            if (!inWord)
            {
                words++;
                inWord = true;
            }
        }
    }

    cout << "The number of words in the sentence is " << words << endl;
    return 0;
}
