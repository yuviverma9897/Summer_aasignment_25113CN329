//sum of digits of a number
#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("Enter a no\n");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        n=n/10;
        sum+=rem;
    }
    printf("the sum of digits is %d",sum);
}
