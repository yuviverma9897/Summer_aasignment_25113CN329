// func to find sum of two numbers
#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int a, b;
    cout << "enter two numbers" << endl;
    cin >> a >> b;

    int ans = sum(a, b);
    cout << "The sum of numbers " << a << " and " << b << " is " << ans << endl;
    return 0;
}