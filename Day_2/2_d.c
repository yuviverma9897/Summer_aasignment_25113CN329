//palindrome no or not
#include<stdio.h>
int main()
{
    int n,rev=0,rem,original;
    printf("Enter a no\n");
    scanf("%d",&n);
    original=n;
    while(n>0){
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    if(original==rev){
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
}