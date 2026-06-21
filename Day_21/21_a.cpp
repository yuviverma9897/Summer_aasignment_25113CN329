// to find string length without strlen()
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of characters in string "<<endl;
    cin >> n;

    vector<char> str(n);

    cout << "Enter the elements of the string" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    int length = 0;
    for (char ele : str)
    {
        length++;
    }

    cout << "Length of the string is " << length << endl;
    cout<<str.size();
    return 0;
}
