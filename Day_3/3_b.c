//to print prime numbers in range
#include <stdio.h>
int main()
{
    int range;
    printf("enter the range\n");
    scanf("%d",&range);
    if(range<2){
        printf("prime numbers does not exist in this range\n");
        return 0;
    }
    printf("prime numbers in the range are\n");
    for(int i=2;i<=range;i++){
        int prime=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime){
            printf("%d ",i);
        }
    }
    return 0;
}