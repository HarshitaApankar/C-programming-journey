#include <stdio.h>

int main() 
{
    FILE *fp;

    fp = fopen("data.txt", "w");     //open a file named data 

    fprintf(fp, "Hello! This is Day 12 File Handling.");   //put this message in the data named file

    fclose(fp);  //close file

    printf("Data written to file successfully.");

    return 0;
}
