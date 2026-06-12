// func for perfect no
#include <iostream>
using namespace std;

bool perfect(int num)
{
    int result = 0;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            result += i;
        }
    }
    return result == num;
}

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    if (perfect(num))
    {
        cout << num << " is a perfect number" << endl;
    }
    else
    {
        cout << num << " is not a perfect number" << endl;
    }
    return 0;
}
