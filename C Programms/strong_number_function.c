/* Author: Sonali Patil
   Date: 11 june 2026
   Description: This program checks whether a number is strong or not in C language.
*/
// This program checks whether a number is strong or not in C language.
#include<stdio.h>
// Function declaration
int fact(int); 
int strong(int); // strong

int main()
{
    int num,result;
    printf("Enter a number:");
    scanf("%d",&num);
    result = strong (num);
    if (result == 1)
        printf("%d is strong",num);
    else
        printf("%d is not strong",num);
    return 0;    
}
// Funtion defination
int strong(int num)
{
    int digit, factorial =1;
    int sum =0; //Used to store addition of factorial of digits
    int original_num = num; // copy original number
    while(num != 0)
    {
        digit = num % 10;
        factorial = fact (digit);
        sum = sum + factorial;
        num = num / 10;
    }
    if(sum == original_num)
        return 1;
    else 
        return 0;
}    
 int fact(int digit)
 {
     int factorial = 1;
     int i = 1;
     for (i = 1; i <= digit; i++)
     {
         factorial = factorial * i;
     }
     return factorial;
}
