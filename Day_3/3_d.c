//to find lcm of 2 numbers
#include <stdio.h>
int main(){
    int a,b,gcd,lcm;
    
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    int prod=a*b;
    while(b!=0) {
        int temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;
    lcm=prod/gcd;
    printf("LCM is %d\n",lcm);

    return 0;
}