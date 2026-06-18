/* Author: Sonali Patil
   Date: 17 June 2026
   Description: This program converts a decimal number to binary number.
*/

// This program converts a decimal number to binary number
#include <stdio.h>
int main() {
    int original_num;
    int binary_arr[32]; 
    int num,i =0,digit;
    printf("Enter number:");
    scanf("%d",&num);
    
    while(num > 0)
    {
        digit = num % 2;
        binary_arr[i] = digit;
        i++;
        num = num / 2;
    }
    printf("Binary number is:");
    for ( ;i > 0; i--)
    {
        printf("%d", binary_arr[i-1]);
    }  
    return 0;
}