/* Author: Sonali Patil
   Date: 29-04-2026
   Description: C program to print a number pyramid pattern.


*/

// this program prints a number pyramid pattern
#include <stdio.h>

int main() {
    int n=4,i,j,k;
    for (i = 1; i <=n ; i++)
    {
        for(j = 1; j<= n - i; j++)
        {
            printf("  ");
        }
         for(k = 1;k <= i; k++)
        {
             printf("%d   ", k);
        }
        printf("\n");
    }

    return 0;
}