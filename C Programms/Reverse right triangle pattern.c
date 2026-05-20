/* Author: Sonali Patil
   Date: 28-04-2026
   Description: This program prints a right triangle star pattern using nested loops.
*/

// This program print right triangle star pattern using nested loop
#include <stdio.h>

int main() {
    // Write C code here
    int n, i,j;
    for(i=4;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}