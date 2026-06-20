
/* Author: Sonali Patil
   Date: 19-06-2026
   Description: This program reads data from a file named "contact.txt" using the C17 language standard.
*/
// This program reads data from a file named "contact.txt" using the C17 language standard.
#include<stdio.h>
int main()
{
    char ch[100];
    FILE * fp;
    fp = fopen("contact.txt","r");
    if (fp == NULL)
    printf("Error in opening file");
    else
    {
        while(fscanf(fp, "%99s", ch) == 1)
        {
            printf("%s", ch);
        }
    }
    return 0;
}