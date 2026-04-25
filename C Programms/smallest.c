/* Author: Sonali Patil
    Date: 25-04-2026
    This program finds the smallest of three numbers
*/

// Find smallest number
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    printf("enter three number");
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<=c)
    printf("smallet number is a=%d", a);
    else
    if(b<=c && b<=a)
    printf("smallest number is b=%d",b);
    else
    printf("smallest number is c=%d",c);

    return 0;
}