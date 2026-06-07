// recursive fibonacci
#include <stdio.h>
int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int num;
    printf("Enter a no\n");
    scanf("%d", &num);

    printf("The fibonacci series upto number %d is\n", num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", fib(i));
    }
    return 0;
}