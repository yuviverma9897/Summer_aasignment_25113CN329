// func for armstrong
#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int num)
{
    int rem, n = 0, result = 0, temp;

    temp = num;
    while (temp != 0)
    {
        temp /= 10;
        n++;
    }
    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        int pow = 1;
        for(int i = 0; i < n; i++) {
            pow *= rem;
        }
        result+= pow;
        temp /= 10;
    }
    return result == num;
}

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    if (armstrong(num))
    {
        cout << num << " is an armstrong number" << endl;
    }
    else
    {
        cout << num << " is not an armstrong number" << endl;
    }
    return 0;
}