#include<stdio.h>
int main()
{
    FILE * fp;
    fp = fopen("contact.txt","w");
    if (fp == NULL)
        printf("Error in opening file");
    else {  
        fprintf(fp, "hello world\n");
        fprintf(fp, "python\n");
    }
    fclose(fp);
    return 0;
}