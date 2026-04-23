/* Author: Sonali patil
    Date: 23-04-2026
    This program checks whether the given number is even or odd


*/
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Enter a number");
   int num;
    scanf("%d",&num);
    if (num%2 == 0)
    printf("the number is Even");
    else 
    printf("the number is odd");

    return 0;
}