//check armstrong or not
#include<stdio.h>
int main() {
    int num, rem, n=0, result=0, temp;
    printf("Enter a number\n");
    scanf("%d", &num);

    temp = num;
    while(temp != 0) {
        temp /= 10;
        n++;
    }
    temp = num;

    while (temp != 0) {
        rem = temp % 10;
        int pow = 1;
        for(int i = 0; i < n; i++) {
            pow *= rem;
        }
        result+= pow;
        temp/= 10;
    }
    if (result==num){
        printf("%d is an Armstrong number.\n",num);
    }
    else{
        printf("%d is not an Armstrong number.\n",num);
    }
    return 0;
}
