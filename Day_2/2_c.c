//product of digits 
#include<stdio.h>
int main()
{
    int n,prod=1,rem;
    printf("Enter a no\n");
    scanf("%d",&n);
    if(n==0){
        prod=0;
    }
    else{
        while(n>0){
            rem=n%10;
            n=n/10;
            prod*=rem;
        }
        printf("the product of digits is %d",prod);
    }
}
