#include <stdio.h>


struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;

    fp = fopen("students.txt", "w");

    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fprintf(fp, "Roll: %d Name: %s Marks: %.2f\n", s.roll, s.name, s.marks);

    fclose(fp);

    printf("Student data saved to file.");

    return 0;
}
