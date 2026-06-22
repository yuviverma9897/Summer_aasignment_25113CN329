//to remove spaces from the string 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string" << endl;
    getline(cin, str);

    string result = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            result += str[i];
        }
    }

    cout << "String after removing spaces: " << result << endl;
    return 0;
}
