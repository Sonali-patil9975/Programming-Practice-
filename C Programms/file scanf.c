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