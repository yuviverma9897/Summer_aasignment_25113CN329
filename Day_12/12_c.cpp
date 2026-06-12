// func for fibonacci
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int first = 0, sec = 1;

    if (n == 1)
    {
        return first;
    }
    else if (n == 2)
    {
        return sec;
    }
    for (int i = 1; i <= n - 2; i++)
    {
        int temp = first;
        first = sec;
        sec += temp;
    }
    return sec;
}

int main()
{
    int num;
    cout << "Enter a number upto which u want to print fibonacci series" << endl;
    cin >> num;

    cout << "Fibonacci series is" << endl;
    for (int i = 1; i <= num; i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
