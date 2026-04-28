/* Author: Sonali Patil
   Date: 28-04-2026
   Description: This program reads the roll numbers of students and prints only the even numbers.


*/
// this program read the roll number of student and print only even number
#include <stdio.h>

int main() {
    // Write C code here
    int n=0,roll_number,i;
    printf("Enter how many student:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
    printf("read roll_number");
    scanf("%d",&roll_number);
    if (roll_number%2!=0)
    {
        continue;
    }
    
    printf("even roll number:%d\n",roll_number);
    }
    return 0;
}