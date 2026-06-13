/* Author: Sonali Patil
    Date: 12 june 2026
    Description: This program takes a character input from the user and prints its ASCII value in C language.
*/

// This program takes a character input from the user and prints its ASCII value.
#include <stdio.h>
int main()
{
    char c;
    printf("Enter characters:\n");
    scanf("%c",&c);
    printf("ASCII value of %c is %d",c,c);
    return 0;
}