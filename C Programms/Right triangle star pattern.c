/* Author: Sonali Patil
   Date: 28-04-2026
   Description: This program prints a right triangle star pattern using nested loops.

*/

// this program print right triangle star pattern using nested loop
#include <stdio.h>

int main() {
    // Write C code here
    int i, j;
    for (i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        } 
        printf("\n");
    }
    

    return 0;
}