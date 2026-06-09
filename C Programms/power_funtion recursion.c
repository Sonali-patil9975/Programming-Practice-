/* Author: Sonali Patil
   Date: 06 june 2026
   Description: This program calculates the power of a number using recursion.
*/

// This program calculates the power of a number using recursion in C language.
#include <stdio.h>
// Funtion Defination
int power(int, int);
int main(){
    int num,pow,result;
    printf("Enter num and power:");
    scanf("%d %d",&num,&pow);
    result=power(num,pow);
    printf("Result is %d",result);
    return 0;
    }
//Funtion Declartion  
int power (int num, int pow)
{
    if (pow == 1)
    return num;
    else
    return num*power(num,pow-1);
}
