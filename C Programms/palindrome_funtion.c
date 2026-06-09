/* Author: Sonali Patil
   Date: 06 june 2026
   Description: This program checks whether a number is palindrome or not using function.
*/
// This program checks  a number is palindrome or not using a function in C language.
#include<stdio.h>
// Funtion Declartion
int palindrome(int);
int main(){
    int num,yes;
    printf("Enter number to check palindrome:");
    scanf("%d",&num);
    yes = palindrome(num);//Funtion call
    if(yes == 1)
    printf("%d is palindrom",num);
    else
    printf("%d is not palindrome",num);
    return 0;
}
// Funtion defination
int palindrome(int num)
{
    int original =num;
    int rev = 0, digit;
    while(num != 0)
    {
        digit = num %10;
        rev = rev*10 +digit;
        num = num /10;
    }
    if (rev == original)
    return 1;
    else
    return 0;
}