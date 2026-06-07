// recursive sum of digits
#include <stdio.h>
int sum_dig(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n%10 + sum_dig(n / 10);
    }
}
int main()
{
    int number;
    printf("Enter a no\n");
    scanf("%d", &number);

    int sum = sum_dig(number);
    printf("The sum of digits of number %d is %d.\n", number, sum);
    return 0;
}