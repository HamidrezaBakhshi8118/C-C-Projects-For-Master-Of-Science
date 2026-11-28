#include "stdio.h"

int square(int a); //prototype

int main(void){

    for(int x=1;x<=10;x++){
        printf("%d\n",square(x));
    }

}

//init function
int square(int a){
    return a*a;
}