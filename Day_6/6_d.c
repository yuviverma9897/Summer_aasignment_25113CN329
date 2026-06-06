// find x^n without pow()
#include <stdio.h>
int main()
{
    int num, n, power = 1;
    printf("Enter a number and its power\n");
    scanf("%d%d", &num, &n);
    for (int i = 1; i <= n; i++)
    {
        power *= num;
    }

    printf("Value of %d raised to the power %d is %d.\n", num, n, power);
    return 0;
}