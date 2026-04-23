/* author: Sonali Patil
   date: 23-04-2026
   this program print reverse of given number
*/
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int digit=0,rev=0,num=0;
    printf("This program print of given reverse number");
    scanf("%d",&num);
    if (num==0) 
    printf("%d",num);
    else 
    for(rev=0;num>0;num=num/10){
        digit=num%10;
        rev=rev*10+digit;
    }
    printf("%d",rev);
    return 0;
}