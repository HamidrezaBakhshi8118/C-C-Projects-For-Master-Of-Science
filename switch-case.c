# include "stdio.h"

int main(){
    char grade;
    puts("please enter a new grade : ");
    while ((grade = getchar()) != EOF)
    {
        switch (grade)
        {
            case 'A':
                puts("your grade is A , yay\n");

            case 'J':
                puts("\nthis block runs because there was no break");
                break;    
            
            case 'E':
                puts("no grade , EXIT\n");
                break;

            default:
                printf("%s is incorrect pleas put another one ");
                puts("enter a new grade :"); 
        }       break;
    }
    
     
}