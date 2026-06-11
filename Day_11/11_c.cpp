// func to check prime
#include <iostream>
using namespace std;

void prime(int num)
{
    int i, isprime = 1;

    if (num <= 1)
    {
        isprime = 0;
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }
    if (isprime)
    {
        cout << num << " is prime." << endl;
    }
    else
    {
        cout << num << " is not prime." << endl;
    }
}

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    prime(num);
    return 0;
}
