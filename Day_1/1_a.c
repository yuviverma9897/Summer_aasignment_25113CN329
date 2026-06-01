#include <stdio.h>

int main() {
    int n,i,sum=0;
    printf("Enter a no\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum is %d",sum);
    
    return 0;
}