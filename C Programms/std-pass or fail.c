/* Author: Sonali Patil
   Date: 25-04-2026
   Description: C program to determine if a student has passed or failed based on their average marks.

*/
#include <stdio.h>

int main() {
    // Write C code here
    // This programm determine student is pass or fail
    int average=0,sub1=0,sub2=0;
    printf("Take student mark:");
    scanf("%d%d",&sub1,&sub2);
    average=(sub1+sub2)/2;
    if (average<35){
    printf("student is fail");
    }
    else{
    printf("student is pass");
        
    }

    return 0;
}