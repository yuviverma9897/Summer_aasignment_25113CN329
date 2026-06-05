//to print largest prime factor
#include<stdio.h>
int main(){
    int num, la_pr_fct=0;
    printf("Enter a number\n");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++) {
        if(num%i == 0) {
            int prime = 1;
            for(int j = 2; j <= i/2; j++) {
                if(i % j == 0) {
                    prime = 0;
                    break;
                }
            }
            if(prime){
                la_pr_fct = i;
            }
        }
    }

    if (la_pr_fct != 0){
        printf("Its largest prime factor is %d", la_pr_fct);
    }
    else{
        printf("No prime factors exists");
    }
    return 0;
}
