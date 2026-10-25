# include <stdio.h>

int main(void) {
    int x;
    printf("please enter a number : ");
    scanf("%d" , &x);
    if (x%2==0) {
        printf("%d is even" , x);

    }
}