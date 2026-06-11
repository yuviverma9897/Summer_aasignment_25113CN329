// func to find factorial
#include <iostream>
using namespace std;

int fact(int n)
{
    int i, result = 1;
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    cout << "Factorial of " << num << " is " << fact(num) << endl;
    return 0;
}