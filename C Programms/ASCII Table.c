/*
    Author: Sonali Patil
    Date: 12 June 2026
    Description: This program prints the ASCII values of characters from 0 to 127.
*/

// This program prints the ASCII values of characters from 0 to 127.
#include <stdio.h>
int main()
{
    char c;
    int i;
    printf("Enter character:\n");
    scanf("%d",&c);
    for(i = 0; i <= 127; i++)
    {  
        printf("ASCII value of %c is %d\n",i,i);
    }
    return 0;
}