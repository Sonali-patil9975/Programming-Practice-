/* Author: Sonali Patil
   Date: 26-04-2026
   Description: This program prints a series of numbers up to a given limit.


*/

// This programm print number series
#include <stdio.h>

int main() {
    // Write C code here
    int n,i=1;
    printf("enter the limit:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("%d", i );
    }
    

    return 0;
}