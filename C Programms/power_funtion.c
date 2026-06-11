/* Author: Sonali Patil
   Date: 06 june 2026
   Discription: This program calculates the power of a number using function.
*/

// This program is to find the power of a number using function in C language.
#include <stdio.h>
// Funtion Defination
int power (int,int);
int main(){
    int result;
    int num,pow;
    printf("Enter Number and Power:");
    scanf("%d %d",&num,&pow);
    result=power(num ,pow);
    printf("Power of number is %d",result);
    return 0;
}
//Funtion Declartion
int power(int num, int pow)
{
    int i, result = 1;
    for(i = 1; i <= pow; i++){
        result = result * num;
    }
    return result;
}