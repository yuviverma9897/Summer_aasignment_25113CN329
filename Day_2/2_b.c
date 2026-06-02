//reverse of a no
#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    printf("Enter a no\n");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    printf("the reverse of the no is %d",rev);
}
