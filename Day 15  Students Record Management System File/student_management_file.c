#include<stdio.h>
#include<stdlib.h>

struct Student
{
       int roll_no;
       char name[30];
       float marks;
};


struct Student s[20];
int count=0;

void addStudent()
{
        printf("Enter roll number:\n");
        scanf("%d",&s[count].roll_no);

        printf("Enter name of the student:\n");
        scanf("%s",s[count].name);
 
        printf("Enter marks:\n");
        scanf("%f",&s[count].marks);

        count++;
        printf("Students record added successfully\n");
}

void viewStudents()
{
       if(count==0)
       {
        printf("\n no students record is found\n");
        return;
       }
       for(int i=0;i<count;i++)
       {
               printf("\nRoll no: %d",s[i].roll_no);
               printf("\nName :%s",s[i].name);
               printf("\nMarks:%f",s[i].marks);
       }
}
void saveToFile()
{
          FILE *fp=fopen("student.txt","w");

          for(int i=0;i<count;i++)
          {
              fprintf(fp,"%d %s %f\n",s[i].roll_no,s[i].name,s[i].marks);
          }
          fclose(fp);
          printf("\nStudents records saved successfully");

}
void loadFromFile()
{
    FILE *fp=fopen("student.txt","r");

          if(fp==NULL)
          {
              printf("\n file is empty");
              return;
          }

          count=0;

          while(fscanf(fp,"%d %s %f",&s[count].roll_no,s[count].name,&s[count].marks)!=EOF)
          {
                 count++;
          }

          fclose(fp);
          printf("\nData loaded from file successfully!");

}
void deleteStudent()
{
          int rno,found=0;
          struct Student temp;

          printf("\nEnter the roll number whose record you want to delete:\n");
          scanf("%d",&rno);
    /*logic Open original file (students.txt) → read mode

      Open a temporary file (temp.txt) → write mode

      Read each record one by one

      If record ≠ roll number to delete → write to temp file

      Skip the record you want to delete

      Close both files

      Delete original file

      Rename temp.txt → students.txt*/

          FILE*fp=fopen("student.txt","r");
          FILE*tempFile=fopen("temp.txt","w");

          if(fp == NULL)
          {
                printf("\nFile not found!\n");
                return;
          }

          while(fscanf(fp,"%d %s %f",&temp.roll_no,temp.name,&temp.marks)!=EOF)
          {
                if(temp.roll_no!=rno)
                {
                    fprintf(tempFile,"%d %s %f",temp.roll_no,temp.name,temp.marks);
                }
                else
                {
                    found=1;
                }
          }
          fclose(fp);
          fclose(tempFile);

          remove("student.txt");
          rename("temp.txt","student.txt");

          if(found)
            printf("student deleted successfully\n");
          else
            printf("student not found");

}

int main()
{
          int choice;

          while(1)
          {
              printf("\n----Student management system-----");
              printf("\n1. Add Student\n");
              printf("\n2. View Students\n");
              printf("\n3. Save to file\n");
              printf("\n4. Load from file\n");
              printf("\n5. Delete student from file\n");
              printf("\n6. Exit\n");

              printf("\nEnter your choice: ");
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
                       saveToFile();
                       break;
                   case 4:
                       loadFromFile();
                       break;
                   case 5:
                       deleteStudent();
                       break;
                   case 6:
                    exit(0);

                   default:
                    printf("\n Invalid choice!\n");
              }
          }
          return 0;
}
