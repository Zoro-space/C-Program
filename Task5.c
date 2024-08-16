//WAP a program to accept Percentage from user and check the GRADE
 //A. Above 70% - Grade A
// B. Between 60% to 70% - Grade B+.
// C. Between 45% to 60% - Grade B.
// D. Between 35% to 45% - Grade C.
// E. Less than 35% - Fail

#include <stdio.h>

int main() {
    float percentage;
    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if (percentage > 70) {
        printf("Grade A\n");
    } else if (percentage >= 60 && percentage <= 70) {
        printf("Grade B+\n");
    } else if (percentage >= 45 && percentage < 60) {
        printf("Grade B\n");
    } else if (percentage >= 35 && percentage < 45) {
        printf("Grade C\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
