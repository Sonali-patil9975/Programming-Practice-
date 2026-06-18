/* Author: Sonali Patil
   Date: 17 june 2026
   Description: This program converts a binary number to decimal number.
*/

// This program converts a binary number to decimal number
#include <stdio.h>
int binary_to_decimal(int);

int main() {
    int decimal;
    int num;
    printf("Enter binary number:");
    scanf("%d",&num);
    decimal = binary_to_decimal(num);
    printf("Decimal number is %d",decimal);
}
int binary_to_decimal(int num)
{
    int remainder, base =1;
    int original = num;
    int result =0;
    while(num != 0)
    {
        remainder = num % 10;
        result = result + remainder * base;
        num = num / 10;
        base = base * 2;
    }
    return result;
}