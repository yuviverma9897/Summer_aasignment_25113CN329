// to compress a string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string" << endl;
    cin >> str;

    string compressed = "";
    int count = 1;

    for (int i = 0; i < str.size(); i++)
    {
        if (i + 1 < str.size() && str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            compressed.push_back(str[i]);
            compressed += to_string(count);
            count = 1;
        }
    }

    cout << "Compressed string is " << compressed << endl;
    return 0;
}
