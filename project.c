#include <stdio.h>

int main() {
    int a;
    char grade;


    printf("Enter score out of 100 :- ");
    scanf("%d", &a);


    grade = (a >= 90) ? 'A' :
            (a >= 80) ? 'B' :
            (a >= 70) ? 'C' :
            (a >= 60) ? 'D' :
            (a >= 50) ? 'E' : 'F';


    printf("Grade: %c\n", grade);


    switch (grade) {
        case 'A':
            printf("Excellent performance!\n");
            break;
        case 'B':
            printf("Very good performance!\n");
            break;
        case 'C':
            printf("Good, but you can improve.\n");
            break;
        case 'D':
            printf("Average performance.\n");
            break;
        case 'E':
            printf("Needs improvement.\n");
            break;
        case 'F':
            printf("Fail. Better luck next time.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }


    if (grade == 'A' || grade == 'B' || grade == 'C') {
        printf("You are eligible for the next level.\n");
    } else {
        printf("You are NOT eligible for the next level.\n");
    }

    return 0;
}