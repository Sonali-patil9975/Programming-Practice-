/* Author: Sonali Patil
   Date: 19-06-2026
   Description: This program writes data to a file named "contact.txt" using the C17 language standard.
*/
// This program writes data to a file named "contact.txt" using the C17 language standard.
#include<stdio.h>
int main()
{
    FILE * fp;
    fp = fopen("contact.txt","w");
    if (fp == NULL)
        printf("Error in opening file");
    else {  
        fprintf(fp, "sonali\n");
        fprintf(fp, "patil\n");
    }
    fclose(fp);
    return 0;
}