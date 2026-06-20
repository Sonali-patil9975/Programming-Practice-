/* Author: Sonali Patil
   Date: 17-06-2026
   Description: This program swaps the values of two variables using pointers in C.
*/
// This program swaps the values of two variables using pointers in C.
#include<stdio.h>
void swap (int *, int *);
int main()
{
    int a,b;
    printf("Enter a & b:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("Value of a = %d and b = %d after swap",a,b);
    return 0;
}
void swap (int *t1, int *t2)
{
    int temp;
    temp = *t1;
    *t1 = *t2;
    *t2 = temp;
}