//to check no is strong or not
#include <stdio.h>
int fact(int a){
    int factorial = 1;
    for(int i = 1 ; i <= a ; i++){
        factorial*=i;
    }
    return factorial;
}
int main()
{
    int num , temp , result=0 ,rem;
    printf("Enter a no\n");
    scanf("%d", &num);
    
    temp = num;
    while(temp!=0){
        rem = temp%10;
        result+= fact(rem);
        temp = temp/10;
    }
    if(result==num){
        printf("%d is a strong no",num);
    }
    else{
        printf("%d is not a strong no",num);
    }
    return 0;
}