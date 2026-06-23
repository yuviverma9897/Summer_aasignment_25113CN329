//to find first repeated character
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string " << endl;
    cin >> str;

    int n = str.size();
    char Rep = '\0';

    for (int i = 0; i < n; i++)
    {
        bool repeated = false;
        for (int j = 0; j < n; j++)
        {
            if (i != j && str[i] == str[j])
            {
                repeated = true;
                break;
            }
        }
        if (repeated)
        {
            Rep = str[i];
            break;
        }
    }

    if (Rep != '\0')
        cout << "The 1st repeated character is '" << Rep << "'." << endl;
    else
        cout << "No repeated character found." << endl;

    return 0;
}