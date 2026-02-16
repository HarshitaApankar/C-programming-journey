#include <stdio.h>
#include <stdlib.h>

struct BankAccount
{
    int account_no;
    char customer_name[20];
    float balance;
};

struct BankAccount b[10];
int count=0;

void createAccount()
{
      printf("\nEnter account number =\n");
      scanf("%d",&b[count].account_no);

      printf("\nEnter customer name =\n");
      scanf("%s",b[count].customer_name);

      printf("\nbalance=\n");
      scanf("%f",&b[count].balance);

      count++;
      printf("\n records enter in structre array\n");
}

void viewAccounts()
{
     if (count==0)
     {
         printf("no accounts are created\n");
         return;
     }

     for(int i=0;i<count;i++)
     {
         printf("\nAccount number is %d",b[i].account_no);
         printf("\nName of the customer is %s",b[i].customer_name);
         printf("\nBalance is %.2f",b[i].balance);
     }

}

void depositMoney()
{
       int account_no;
       float amount;
       int found=0;

       printf("\nEnter account number:\n");
       scanf("%d",&account_no);

       for(int i=0;i<count;i++)
       {
           if(b[i].account_no==account_no)
           {
                printf("Enter the amount you want to deposit:\n");
                scanf("%f",&amount);

                b[i].balance+=amount;
                printf("\n Deposited successfully\n");
                printf("\nUpdated balance: %.2f\n",b[i].balance);

            found=1;
            break;
           }
       }
    if(!found)
    printf("\nAccount not found\n");
}

void withdrawMoney()
{
      int account_no;
      float amount;
      int found=0;

      printf("\nEnter the account number:\n");
      scanf("%d",&account_no);

      for(int i=0;i<count;i++)
       {
           if(b[i].account_no==account_no)
           {
                printf("Enter the amount you want to withdraw:\n");
                scanf("%f",&amount);

              if(b[i].balance<amount)
              {
                  printf("\nNo sufficienct account balance");
              }
              else
              {
                b[i].balance-=amount;
                printf("\nAmount withdrawn successfully\n");
                printf("\nUpdated balance : %.2f",b[i].balance);
              }
             found=1;
             break;
           }
       }
       if(!found)
       {
        printf("\nAccount not found\n");
       }

}


void searchAccount()
{
      int account_no;
      int found=0;

      printf("\nEnter the account number you want to search:\n");
      scanf("%d",&account_no);

      for(int i=0;i<count;i++)
      {
           if(b[i].account_no==account_no)
           {
                  printf("%d %s %.2f",b[i].account_no,b[i].customer_name,b[i].balance);
           found=1;
           break;
           }
      }
    if(!found)
        printf("\nAccount not found\n");
}


void saveToFile()
{
        FILE *fp=fopen("account.txt","w");

        for(int i=0;i<count;i++)
        {
            fprintf(fp,"%d %s %.2f\n",b[i].account_no,b[i].customer_name,b[i].balance);
        }
        fclose(fp);
        printf("Records inserted successfully!!\n");
}

int main()
{

    int choice;

    while(1)
    {
        printf("\n-----------Bank account manangement system-------\n");
        printf("\n1. Create Account\n");
        printf("\n2. View All accounts\n");
        printf("\n3. Deposit money\n");
        printf("\n4. Withdraw money\n");
        printf("\n5. Search Account\n");
        printf("\n6. Save Accounts to file\n");
        printf("\n7. exit\n");
        printf("\nenter you choice:\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            createAccount();
            break;
        case 2:
            viewAccounts();
            break;
        case 3:
            depositMoney();
            break;
        case 4:
            withdrawMoney();
            break;
        case 5:
            searchAccount();
            break;
        case 6:
            saveToFile();
            return 0;
            default:printf("\n invalid choice!\n");
        }
    }
}



