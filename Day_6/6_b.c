// binary to decimal
#include <stdio.h>
#include <math.h>
int main()
{
    int decimal = 0, rem, n = 0;
    long long num;
    printf("Enter a binary no\n");
    scanf("%lld", &num);

    long long temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        decimal += rem * pow(2, n);
        temp = temp / 10;
        n++;
    }

    printf("The conversion of binary no %lld in decimal is %d.", num, decimal);
    return 0;
}