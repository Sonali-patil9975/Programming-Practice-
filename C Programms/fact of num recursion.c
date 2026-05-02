/* Author: Sonali Patil
   Date: 29-04-2026
   Description: C program to calculate factorial of a number using a recursive function.
*/

// Factorial using recursive function
#include <stdio.h>
int fact(int);
int main() {
    int result,num;
    printf(" Enter a number:");
    scanf("%d",&num);
    result=fact(num);
    printf("factorial of %d is %d",num,result);
    
    return 0;
}
int fact (int num){
    if(num==1)
    return 1;
    return num* fact(num-1);
}