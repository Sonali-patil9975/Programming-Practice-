
/* Author: Sonali Patil
   Date: 21-04-2026
   Description: C program to swap two numbers using a temporary variable.


*/
#include<stdio.h>
int main() {
    int a,b,temp;
    printf("Enter two numbers to swap");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping a=%d b=%d",a,b);
}