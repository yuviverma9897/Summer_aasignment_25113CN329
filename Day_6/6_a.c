// decimal to binary
#include <stdio.h>
int main()
{
    int num, rem, n = 0, rem1;
    long long rev_bin = 0, bin = 0;
    printf("Enter a decimal number\n");
    scanf("%d", &num);

    int OrNum = num;
    while (num != 0)
    {
        rem = num % 2;
        rev_bin = rev_bin * 10 + rem;
        num = num / 2;
        n++;
    }

    long long temp = rev_bin;
    for (int i = 1; i <= n; i++)
    {
        rem1 = temp % 10;
        bin = bin * 10 + rem1;
        temp = temp / 10;
    }
    printf("The conversion of decimal no %d into binary is %lld.", OrNum, bin);
    return 0;
}