/* Author: Sonali Patil
   Date: 13 Jun 2026
   Description: Check if the entered letter is uppercase or lowercase
*/
// This program checks if the entered letter is uppercase or lowercase
#include<stdio.h>
int main()
{
char c;
printf("Please enter letter:");
scanf("%c",&c);
if(c <= 'Z' && c >= 'A')
printf("Upper case");
else
printf("Lower case");
return 0;
}