#include <stdio.h>

int main() {
    int n,i,fact=1;
    printf("Enter a no\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("sum is %d",fact);
    
    return 0;
}