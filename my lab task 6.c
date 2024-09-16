#include <stdio.h>

int main() {
    int marks;
    char grade;

    
    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    
    switch (grade) {
        case 'A':
            printf("Grade: A\n");
            break;
        case 'B':
            printf("Grade: B\n");
            break;
        case 'C':
            printf("Grade: C\n");
            break;
        case 'D':
            printf("Grade: D\n");
            break;
        case 'F':
            printf("Grade: F\n");
            break;
        default:
            
            printf("Invalid grade\n");
            break;
    }

    return 0;
}
