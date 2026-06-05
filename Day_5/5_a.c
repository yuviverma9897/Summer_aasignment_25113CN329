//to check no is perfect or not
#include<stdio.h>
int main()
{
    int num , temp , result=0;
    printf("Enter a no\n");
    scanf("%d", &num);

    for(int i = 1 ; i <= num/2 ; i++){
        temp = num;
        if(num % i == 0){
            result+=i;
        }
    }
    if(result==num){
        printf("%d is a perfect no",num);
    }
    else{
        printf("%d is not a perfect no",num);
    }
    return 0;
}