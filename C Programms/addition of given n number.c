/* Author: Sonali Patil
   Date: 25-04-2026
   Description: This program calculates the addition of given n numbers


*/
// this programm calculates addition of given n number
#include <stdio.h>

int main() {
    // Write C code here
    printf("this programm calculates addition of given n number\n");
    int range=0,num=0,sum=0,i=0;
    printf("How many number you would like to add\n");
    scanf("%d",&range);
    for(i=0;i<=range;i++){
    // This will read number from user
    printf("plese enter number %d\n",i);
    scanf("%d",&num);
    sum=sum+num;
    }
    printf("addition of given number is%d",sum);
    return 0;
}