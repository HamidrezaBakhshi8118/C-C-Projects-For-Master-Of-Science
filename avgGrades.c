
#include <stdio.h>

int main(void) {
    int total = 0;
    int counter = 0;
    int grade;

    while (true) {
        printf("Please enter a grade: ");
        scanf("%d", &grade);

        if (grade == -1) {
            break;
        }

        total += grade;
        counter++;
    }

    if (counter > 0) {
        double avg = (double) total / counter;
        printf("Average = %.2f\n", avg);
    } else {
        printf("No grades were entered.\n");
    }

    return 0;
}
