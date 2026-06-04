//nth term ol fibonacci series
#include<stdio.h>
int main(){
    int n,first=0,sec=1;
    printf("Enter the position of an element of the series\n");
    scanf("%d",&n);
    printf("the %dth fibonacci term is\n",n);

    if(n==1){
        printf("%d",first);
        return 0;
    }
    else if(n==2){
        printf("%d",sec);
        return 0;
    }
    for(int i=1;i<=n-2;i++){
        int temp =first;
        first=sec;
        sec+=temp;
    }
    printf("%d",sec);
    return 0;
}