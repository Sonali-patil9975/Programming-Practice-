/* Author: Sonali Patil
   Date: 03 june 2026
   Discription: This program calculates the cube of a number using function.
*/

// This program calculates the cube of a number using a function in C.
#include <stdio.h>
//Function declaration
int cube(int);
// Function defination
int cube(int num){
int result = num*num*num;
return result;
}
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int result = cube(num);
    printf("cube of number is %d", result);

    return 0;
}