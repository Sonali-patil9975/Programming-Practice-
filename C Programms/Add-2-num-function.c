/* Author: Sonali patil
    Date: 29-04-2026
    This program addition of two numbers using a function
*/

// this program addition of two numbers using a function
#include <stdio.h>
int sum(int,int); //function declartion
int main() {
    int a,b,result;
    printf("Enter two number a and b:");
    scanf("%d %d",&a,&b);
    result=sum(a,b);
    printf("Addition of %d and %d is = %d",a,b,result);
    return 0;
}
int sum(int num1,int num2)
{
    return  num1+num2;
}