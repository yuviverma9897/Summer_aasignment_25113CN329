// to sort words by length
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of words " << endl;
    cin >> n;

    string words[100];
    cout << "Enter words " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (words[i].size() > words[j].size())
            {
                string temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }

    cout << "Words sorted by length " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << words[i] << " ";
    }
    cout << endl;

    return 0;
}
