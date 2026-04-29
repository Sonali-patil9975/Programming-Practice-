/* Author: Sonali Patil
   Date: 29-04-2026
   Description: C program to check if a number is a palindrome using recursion.
*/

// 
#include <stdio.h>

int reverse (int n,int rev)
{
    if(n==0)
       return rev;
    return reverse(n/10,rev*10+n%10);
}
int main(){
    int num, result;
    printf("enter a number:");
    scanf("%d",&num);
    
    result =reverse(num,0);
    
    if (num == result)
       printf("number is palindrom");
    else
       printf("number is not palindrom");
    
    return 0;
}