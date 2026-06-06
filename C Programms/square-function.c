/* Author: Sonali Patil
   Date: 03 june 2026
   Discription: This program calculates the square of a number using function.
*/

// This program calculates the square of a number using a function in C.
#include <stdio.h>
// Function Declaration
int squ(int);
//Function defination
int squ(int num){
    int result = num * num;
    return result;
}
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int result = squ(num);
    printf("Square of number is %d",result);
    return 0;
}