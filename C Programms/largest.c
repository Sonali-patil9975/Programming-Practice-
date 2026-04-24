/* author: Sonali Patil
   date:   24-04-2026
   description:  program to find largest of three numbers


*/
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    printf("Enter three number");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c)
    printf("largest number is a=%d", a);
    else if(b>=a && b>=c)
    printf("largest number is b=%d", b);
    else 
    printf("largest number is c= %d", c);
    

    return 0;
}