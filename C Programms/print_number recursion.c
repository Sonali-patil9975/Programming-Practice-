/* Author: Sonali Patil
   Date: 11 june 2026
   Description: This program prints numbers from start to end using recursion in C.
*/

//This program prints numbers from start to end using recursion.
#include <stdio.h>
void print_number(int,int);
int main() {
    int start,end;
    int num;
    printf(" Enter start and end:");
    scanf("%d %d",&start,&num);
    print_number(start,num);
    return 0;
}
void print_number(int start,int end)
{
    if(start <= end){
        printf("%d ",start);
        print_number(start + 1 ,end);
    }
}