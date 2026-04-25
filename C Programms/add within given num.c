/* Author: Sonali Patil
   Date: 25-04-2026
   Description: This program calculates the addition of within given number     


*/
// this programm calculate addition of within given number
#include <stdio.h>
int main() {
    // Write C code here
    printf("This program calculate additon of within given number\n");
    int sum=0,start=0,i=0,end=0;
    printf("plese give start and end");
    scanf("%d %d",&start,&end);
    for(i=0;i<=end;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}