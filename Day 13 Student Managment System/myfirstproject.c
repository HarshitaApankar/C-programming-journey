#include <stdio.h>
#include <stdlib.h>

struct Student
{
      int roll;
      char name[50];
      float marks;
};

struct Student s[10];
int count=0;


void addStudent()
{
     printf("\n Enter roll no :\n");
     scanf("%d",&s[count].roll);

     printf("\n Enter name :\n");
     scanf("%s",s[count].name);

     printf("\nEnter marks :\n");
     scanf("%f",&s[count].marks);

     count++;
     printf("\n students added successfullyy!!\n");
}

void viewStudents()
{
    if(count==0)
    {
        printf("\n no students record is found\n");
        return;
    }
    printf("\n lists of students:\n");
    for(int i=0;i<count;i++)
    {

        printf("\nRoll no:%d",s[i].roll);
        printf("\nName is:%s",s[i].name);
        printf("\nMarks is:%f",s[i].marks);
    }
}
void searchStudent()
{
int srno,found=0;
printf("\n Enter the students roll no you want to search:\n");
scanf("%d",&srno);
for(int i=0;i<count;i++)
{
     if(s[i].roll==srno)
     {
     printf("\n student found\n student details: %d %s %.2f",s[i].roll,s[i].name,s[i].marks);
     found=1;
     }
}
     if(!found)
     printf("not found!");
}
void saveinFile()
{
    FILE *fp=fopen("student.txt","w");

    for(int i=0;i<count;i++)
    {

        fprintf(fp,"%d %s %.2f",s[i].roll,s[i].name,s[i].marks);
    }
    fclose(fp);
    printf("\n data enterd into the file successfully\n");
}

int main()
{

    int choice;

    while(1){
        printf("\n--Student Management System---\n");
        printf("\n1. Add Students\n");
        printf("\n2. View Students\n");
        printf("\n3. Search Student\n");
        printf("\n4. Save and exit\n");
        printf("\nenter you choice:\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            viewStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            saveinFile();
            return 0;
            default:printf("\n invalid choice!\n");
        }
    }
}




