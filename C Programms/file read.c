/* Author: Sonali Patil
   Date: 19-06-2026
   Description: This program reads data from a file named "contact.txt" using the C17 language standard.
*/
// This program reads data from a file named "contact.txt" using the C17 language standard.
#include<stdio.h>
int main()
{
    char c;
    FILE * fp;
    fp = fopen("contact.txt","r");
    if (fp == NULL)
    {
        printf("Error in opening file");
    }
    else
    {
        while((c = getc(fp))!= EOF)
        {
            printf("%c",c);
        }
    }
    return 0;
}