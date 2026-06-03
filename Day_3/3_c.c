//to find gcd of 2 numbers
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    while(b!=0) {
        int temp=b;
        b=a%b;
        a=temp;
    }
    printf("GCD is %d\n",a);

    return 0;
}
