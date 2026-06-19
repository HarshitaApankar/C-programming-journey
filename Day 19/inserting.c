#include <stdio.h>

int main() {
    char name[50];
    int marks;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    printf("\nStudent Name: %s\n", name);
    printf("Marks: %d\n", marks);

    if (marks >= 90)
        printf("Grade: A+\n");
    else if (marks >= 80)
        printf("Grade: A\n");
    else if (marks >= 70)
        printf("Grade: B\n");
    else if (marks >= 60)
        printf("Grade: C\n");
    else if (marks >= 40)
        printf("Grade: D\n");
    else
        printf("Grade: F (Fail)\n");

    return 0;
}
