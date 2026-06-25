// to sort names alphabetically
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of names " << endl;
    cin >> n;

    string names[100];
    cout << "Enter names " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (names[i] > names[j])
            {
                string temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    cout << "Sorted names " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}
