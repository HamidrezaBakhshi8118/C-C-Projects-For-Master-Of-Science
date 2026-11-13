# include "stdio.h"

int main(void){
    int number ;
    int digit;
    int sum = 0;
    printf("enter number : ");
    scanf("%d",&number);

    while (number>0){
        digit=number%10;
        sum=sum+digit;
        number=number/10;

    }
    
    printf("%d",sum);
}