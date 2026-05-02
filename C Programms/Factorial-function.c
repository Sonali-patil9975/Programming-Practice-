/* Author: Sonali Patil
   Date: 29-04-2026
   Description: C program to calculate factorial of a number.


*/

// C program to calculate factorial of a number
#include <stdio.h>
int fact(int);//function declartion
int main() {
    int result=1,num=0;//local scope
    printf("Enter any number:");
    scanf("%d",&num);
    result=fact(num);
    printf("factorial of %d is %d",num,result);
    
    return 0;
}
/* This function calculate factorials of input parameter num*/
int fact(int num)
{
    int i=1, result=1;
    for (i=1;i<=num;i++){
        result =result*i;
    }
    return result;
}