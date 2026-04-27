/* Author: Sonali Patil
   Date: 26-04-2026
   Description: This program checks if a number is an Armstrong number or not.


*/
// This program check if a number is armstong or not
#include <stdio.h>

int main() {
    // Write C code here
    int num,original,digit,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    original= num;
    while (num>0){
        digit=num % 10;
        count=count+(digit*digit*digit);
        num=num/10;
    }
    if (original==count)
        printf("%d is armstong",original);
    else 
        printf("%d is not armstong",original);
    
    
    return 0;
}