#include<stdio.h>
#include<stdlib.h>

struct Book
{
    int book_id;
    char title[50];
    char author[50];
    int quantity;
};


struct Book b[100];
int count=0;

void addBook()
{
        printf("Enter book id:\n");
        scanf("%d",&b[count].book_id);

        printf("Enter title:\n");
        scanf("%s",b[count].title);

        printf("Enter author:\n");
        scanf("%s",b[count].author);

        printf("Enter quantity:\n");
        scanf("%d",&b[count].quantity);

        count++;
        printf("Book added in library successfully!!\n");
}
void viewBooks()
{
       if(count==0)
       {
               printf("\n no book in libraray is found\n");
               return;
       }
       for(int i=0;i<count;i++)
       {
               printf("\nBook id: %d",b[i].book_id);
               printf("\nTitle: %s",b[i].title);
               printf("\nAuthor: %s",b[i].author);
               printf("\nQuantity: %d",b[i].quantity);
       }
}
void searchBook()
{
      int bid;
      int found=0;

      printf("\nEnter the book id you want to search:\n");
      scanf("%d",&bid);

      for(int i=0;i<count;i++)
      {
           if(b[i].book_id==bid)
           {
                  printf("%d %s %s %d",b[i].book_id,b[i].title,b[i].author,b[i].quantity);
           found=1;
           break;
           }
      }
    if(!found)
        printf("\nBook not found\n");
}

void issueBook()
{
      int bid;
      int found=0;

      printf("\nEnter the book's book id you want:\n");
      scanf("%d",&bid);

      for(int i=0;i<count;i++)
       {
           if(b[i].book_id==bid)
           {
                if(b[i].quantity>0)
                {
                       b[i].quantity--;
                       printf("book issued successfully!\n");
                }
                else
                {
                     printf("not available\n");
                }
           found=1;
           break;
           }
       }
    if(!found)
    {
        printf("book id not found");
    }
}

void returnBook()
{
    int bid;
    int found = 0;

    printf("\nEnter the book's book ID you want to return:\n");
    scanf("%d", &bid);

    for(int i = 0; i < count; i++)
    {
        if(b[i].book_id == bid)
        {
            if(b[i].quantity > 0)
            {
                b[i].quantity++;
                printf("Book returned successfully!\n");
            }
            else
            {
                printf("Book not available\n");
            }

            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("Book ID not found\n");
    }
}

void saveToFile()
{
         FILE *fp=fopen("library.txt","w");
         if(fp == NULL)
         {
             printf("File error\n");
             return;
         }

         for(int i=0;i<count;i++)
         {
             fprintf(fp,"%d %s %s %d\n",b[i].book_id,b[i].title,b[i].author,b[i].quantity);
         }
    fclose(fp);
    printf("records saved into the file successfully\n");
}

void loadFromFile()
{
        FILE *fp=fopen("library.txt","r");

         if(fp==NULL)
         {
              printf("\n file is empty");
              return;
         }
         count=0;

         while(fscanf(fp,"%d %s %s %d",&b[count].book_id,b[count].title,b[count].author,&b[count].quantity)!=EOF)
         {
             count++;
         }

        fclose(fp);
        printf("Records loaded from file successfully\n");

}

void deleteBook()
{
        int bid;
        int found=0;
         printf("\nEnter the book id you want to delete:\n");
         scanf("%d",&bid);

         for(int i=0;i<count;i++)
         {
             if(b[i].book_id==bid)
             {
               for(int j = i; j < count - 1; j++)    /*logic behind:if there are 3 books
                                                       b[0],b[1],b[2] and delete b[1] then count will be-1
                                                       only 2 books i=1=j then j=j+1 ie b[2]*/
               {
                  b[j] = b[j + 1];
               }
               count--;
               found=1;
               printf("\nbook deleted successfully!!");
               break;
             }
         }
         if(!found)
            printf("\n book not found");
}

void updateBook()
{
    int bid;
    int found = 0;

    printf("Enter book ID to update:\n");
    scanf("%d", &bid);

    for(int i = 0; i < count; i++)
    {
        if(b[i].book_id == bid)
        {
            printf("Enter new title:\n");
            scanf("%s", b[i].title);

            printf("Enter new author:\n");
            scanf("%s", b[i].author);

            printf("Enter new quantity:\n");
            scanf("%d", &b[i].quantity);

            found = 1;
            printf("Book updated successfully!\n");
            break;
        }
    }

    if(!found)
        printf("Book not found\n");
}


int main()
{
    int choice;

       while(1)
       {
       printf("\n-------library management system------\n");
       printf("\n1. Add Book\n");
       printf("\n2. View All Books\n");
       printf("\n3. Search Book by ID\n");
       printf("\n4. Issue Book\n");
       printf("\n5. Return Book\n");
       printf("\n6. Save to File\n");
       printf("\n7. Load from File\n");
       printf("\n8. Delete book\n");
       printf("\n9. Update book details\n");
       printf("\n10. Exit");

       printf("\nEnter your choice:\n");
       scanf("%d",&choice);

       switch(choice)
       {

       case 1:
           addBook();
           break;
       case 2:
           viewBooks();
           break;
       case 3:
           searchBook();
           break;
       case 4:
           issueBook();
           break;
       case 5:
           returnBook();
           break;
       case 6:
           saveToFile();
           break;
       case 7:
           loadFromFile();
           break;
       case 8:
           deleteBook();
           break;
       case 9:
           updateBook();
           break;
       case 10:
           exit(0);

           default:
           printf("invalid choice\n");
       }
}
return 0;
}
