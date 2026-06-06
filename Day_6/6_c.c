// to count set bits in a number
#include <stdio.h>
int main()
{
    int num, rem, set_bits = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    int OrNum = num;
    while (num != 0)
    {
        rem = num % 2;
        num = num / 2;
        set_bits += rem;
    }
    printf("The count of set bits in the no %d is %d", OrNum, set_bits);
    return 0;
}