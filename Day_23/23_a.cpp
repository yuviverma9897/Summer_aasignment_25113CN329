// to find 1st non repeated character
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string " << endl;
    cin >> str;

    int n = str.size();
    char nonRep = '\0';

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
        if (!repeated)
        {
            nonRep = str[i];
            break;
        }
    }

    if (nonRep != '\0')
        cout << "The 1st non repeated character is '" << nonRep << "'." << endl;
    else
        cout << "No non repeated character found." << endl;

    return 0;
}
