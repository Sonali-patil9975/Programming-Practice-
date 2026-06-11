/* Author: Sonali Patil
   Date: 10 june 2026
   Description: This program is to print the multiplication table of a given number.
*/
// This program is to print the multiplication table of a given number.
#include <stdio.h>
// Function Declaration
void print_table(int);
int main()
{
    int num;
    printf(" Enter a number:");
    scanf("%d",&num);
    print_table(num); // Function call
}
// Funtion defination
void print_table(int num)
{
    int i =1;
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d", num, i, num*i);
        printf("\n");
    }
}