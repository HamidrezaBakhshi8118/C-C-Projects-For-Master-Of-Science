# include <stdio.h>

int main(void) {
    int x , y ;
    printf("please enter x and y  : ");
    scanf("%d %d" , &x , &y);
    if (x>y) {
        printf("x is gt than y : %d > %d" , x,y);

    }
    else if (x<y) {
        printf("x is less than y : %d < %d" , x,y);

    }
    else if (x==y) {
        printf("x is equal y : %d = %d" , x,y);

    }
    else if (x!=y) {
        printf("\nx and y are not equal");

    }
}