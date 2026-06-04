//print armstrong no's in the range
#include<stdio.h>
int main() {
    int range;
    printf("Enter the range\n");
    scanf("%d", &range);

    printf("Armstrong numbers in the range are\n");
    for(int num=1 ; num<=range ; num++){
        int rem, n=0, result=0, temp;
        temp = num;

        while(temp != 0) {
            temp /= 10;
            n++;
        }
        temp = num;

        while (temp != 0) {
            rem = temp % 10;
            int pow = 1;
            for(int i = 0; i < n; i++){
                pow *= rem;
            }
            result+= pow;
            temp/= 10;
        }
        if(num == result){
            printf("%d ",num);
        }
    }
    return 0;
}
