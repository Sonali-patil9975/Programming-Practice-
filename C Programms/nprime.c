/*
    Author : Sonali Patil 
    Date : 21-04-2026
    Description : C program to print prime numbers from 1 to n

*/

#include <stdio.h>
int main() {
  
    int num,i,j;
    // Write C code here
    printf("Please enter range 1 to n, value of n");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        for(j=2;j<i;j++)
        {
            if (i%j==0){
                printf("%d is not prime \n",i);
                break;
            }
        }
        if (i==j)
        printf("%d is prime \n",i);
    }
       return 0; 
}



         
