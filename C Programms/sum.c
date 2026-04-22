// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("This program calculate addition of given 1st n number\n");
    int range=0,n=0,sum=0,i=0;
    printf("addition of 1st n number");
    scanf("%d",&range);
    for(i=0;i<=range;i++){
        sum=sum+i;
   }
   printf("%d",sum);
return 0;
}