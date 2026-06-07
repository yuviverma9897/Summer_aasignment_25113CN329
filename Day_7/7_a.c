// recursive factorial
#include <stdio.h>
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int num;
    printf("Enter a no\n");
    scanf("%d", &num);

    int result = fact(num);
    printf("Factorial of the given is %d", result);
    return 0;
}