#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

// Function to display student details
void display(struct Student s)
{
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s1 = {1, "Amit", 85.5};
    struct Student s2 = {2, "unnati", 98.5};


    display(s1);
    display(s2);

    return 0;
}

