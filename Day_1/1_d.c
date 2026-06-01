#include <stdio.h>

int main() {
    int n,i=0;
    printf("enter a no\n");
    scanf("%d",&n);
    if(n==0){
        i=1;
    }
    else{
        while(n>0){
            n=n/10;
            i++;
        }
    }
    printf("No of digits are %d",i);
    return 0;
}