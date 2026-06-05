//print factors of a no
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a no\n");
    scanf("%d", &num);

    printf("The factors of %d are\n", num);
    for(int i = 1 ; i <= num/2 ; i++){
        if(num % i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}