/* Author: Sonali Patil
   Date: 25-04-2026
   Description: C program to check if a number is positive, negative, or zero.

*/
// This programm check if number positive negative or zero
#include <stdio.h>

int main() {
    // Write C code here
    int num;
    printf("Take number:");
    scanf("%d",&num);
    if(num>0)
    printf("number is positive");
    else if(num<0)
    printf("number is negative");
    else
    printf("zero");

    return 0;
}