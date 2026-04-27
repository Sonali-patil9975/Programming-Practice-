/* Author: Sonali Patil
   Date: 26-04-2026
   Description: This program checks if a number is a palindrome or not.


*/
// this programm check if number is palindrome or not
#include <stdio.h>

int main() {
    // Write C code here
    int num, original,digit,rev=0;
    printf("enter number:");
    scanf("%d",&num);
    original=num;
    while(num = 0){
        digit = num%10;
        rev = rev*10+digit;
        num = num/10;
    }
    if(num == rev)
    printf("number is palindrome");
    else
    printf("number is not palindrome");
 
    return 0;
}