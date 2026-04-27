/* Author: Sonali Patil
   Date: 27-04-2026
   Description: This program prints the Fibonacci series up to a given number of terms.


*/
// This program print fibonacci series
#include <stdio.h>

int main() {
    // Write C code here
    int n,num1=0,num2=1,fib,i;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("fibonacci series: ");
    for (i=1;i<=n;i++){
        printf("%d", num1);
        fib= num1+num2;
        num1= num2;
        num2= fib;
    }

    return 0;
}