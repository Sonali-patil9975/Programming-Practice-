/* Author: Sonali Patil
   Date: 13 Jun 2026
   Description: Check if the entered character is alphanumeric
*/
// This program checks if the entered character is alphanumeric
#include<stdio.h>
int main()
{
char c;
printf("Please enter letter:");
scanf("%c",&c);
if((c <= 'Z'  && c >= 'A') || 
    (c <= 'z' && c >= 'a') ||
    (c >= '0' && c <= '9'))
printf("Alphanumeric value");
else
printf("not alphanumeric value");
return 0;
}