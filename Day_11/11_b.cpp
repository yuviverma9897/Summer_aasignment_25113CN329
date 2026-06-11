// func to find max
#include <iostream>
using namespace std;

int max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int a, b;
    cout << "enter two numbers" << endl;
    cin >> a >> b;

    int ans = max(a, b);
    cout << "Greater no is " << ans << endl;
    return 0;
}