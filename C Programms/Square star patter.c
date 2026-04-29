/* Author: Sonali Patil
   Date: 28-04-2026
   Description: This program prints a square star pattern using nested loops.


*/
// this program print square star pattern using nested loop
#include <stdio.h>

int main() {
    // Write C code here
    int n, j,i;
    for (i=1;i<=3;i++){
        for(j=1;j<=3;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}