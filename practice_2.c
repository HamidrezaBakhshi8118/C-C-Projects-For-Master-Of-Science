# include "stdio.h"

int main(void){
    int n ;
    int i = 1;
    int sum = 0;
    printf("enter number : ");
    scanf("%d",&n);

    while (i<=n){
        sum=sum +i;
        //i=i+1;
        //i++;
        i+=1;
    }
    
    printf("%d",sum);
}