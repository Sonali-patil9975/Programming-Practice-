/* author: sonali patil
   date: 23-04-2026
   this proramm calculate sum of all prev num

*/
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int sum=0,counter=1,i=1,num=0;
    printf(" this programm calculate sum of all prev num");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("sum of prev given number is %d",sum);

    return 0;
}