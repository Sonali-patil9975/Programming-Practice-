/* Author: Sonali Patil
   Date: 28-04-2026
   Description: This program calculates the total bill amount by reading the price of items until the user enters 0.
   
*/

// This program print billing
#include <stdio.h>

int main() {
    // Write C code here
    int bill=0,price=0;
    for( ; ; )
    {
    printf("read price of item:");
    scanf("%d",&price);
    if (price==0)
    break;
    bill=bill+price;
    }
    printf("%d",bill);

    return 0;
}