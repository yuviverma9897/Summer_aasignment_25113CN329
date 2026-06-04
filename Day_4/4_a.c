//to print fibonacci series
#include<stdio.h>
int main(){
    int n,first=0,sec=1;
    printf("Enter an element upto which u want the series\n");
    scanf("%d",&n);
    printf("the fibonacci series upto element %d is\n",n);
    if(n==1){
        printf("%d",first);
        return 0;
    }
    printf("%d %d",first,sec);
    for(int i=1;i<=n-2;i++){
        int temp =first;
        first=sec;
        sec+=temp;
        printf(" %d",sec);
    }
    return 0;
}