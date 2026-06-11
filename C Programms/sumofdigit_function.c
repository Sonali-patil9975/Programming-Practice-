/* Author: Sonali Patil
   Date: 11 june 2026
   Description: This program calculates the sum of digits of a given number using a function in C.
*/

// This program calculates the sum of digits of a given number using a function in C.
#include <stdio.h>
// Function declaration
int sum_digit(int);

int main() 
    {
        int num;
        int sum;
        printf("Enter a number:");
        scanf("%d",&num);
        sum = sum_digit(num);//Function call
        printf("sum of digit is %d",sum);
        return 0;
    }
    int sum_digit(int num)
    {
        int sum = 0;
        int digit;
        while(num != 0)
    
       { digit = num % 10;
        sum = sum + digit;
        num = num / 10;
        }
        return sum;
    }
    