/* Author: Sonali Patil
   Date: 25-04-2026
   Description: This program calculates the count of digits in a given number.



*/
// this program calculate count of digit
#include <stdio.h>

int main() {
    // Write C code here
    int num,count=0,digit;
    printf("Enter number");
    scanf("%d",&num);
    if (num == 0)
    printf("%d",&digit);
    while(num>0){
    num=num/10;
    count++;
    }  
    
    printf("count of digit:%d\n",count);

    return 0;
}