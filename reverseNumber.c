#include "stdio.h"

int main(void){
    int n ,yk,dg,sg ;

    printf("please enter a number :");
    scanf("%d",&n);

    yk=n%10;
    n=n/10;
    dg=n%10;
    n=n/10;
    sg=n%10;

    printf("%d%d%d",yk,dg,sg);
}