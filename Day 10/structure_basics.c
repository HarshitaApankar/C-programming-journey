//write a program to understand the concept of structure with student example

#include <stdio.h>

// Define structure
struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details:\n");
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}

