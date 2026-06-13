/* Author: Sonali Patil
   Date: 13 Jun 2026
   Description: Convert a letter to its opposite case
*/
// This program converts a letter to its opposite case
#include<stdio.h>
int main()
{
char c;
printf("Please enter letter:");
scanf("%c",&c);
if(c <= 'Z' && c >= 'A')
printf("%c",c + 32);
else
printf("%c",c - 32);
return 0;
}