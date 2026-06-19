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