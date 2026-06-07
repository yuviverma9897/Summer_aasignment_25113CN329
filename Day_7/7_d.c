// recursive reverse of number
#include <stdio.h>

int rev_num(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }
    else
    {
        return rev_num(n / 10, rev * 10 + (n % 10));
    }
}

int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d", &number);

    int reversed = rev_num(number, 0);
    printf("The reverse of number %d is %d.\n", number, reversed);

    return 0;
}
