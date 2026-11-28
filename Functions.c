#include "stdio.h"

int square(int a); //prototype

int main(void){
    int number ;
    puts("please enter a number :");
    scanf("%d",&number);
    for(int x=1;x<=number;x++){
        printf("%d\n",square(x));
    }

}

//init function
int square(int a){
    return a*a;
}