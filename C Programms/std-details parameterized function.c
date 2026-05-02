/* Author: Sonali Patil
   Date: 29-04-2026
   Description: C program to display student details using a parameterized function.
*/

// This program to display student details input by user using a parameterized function

#include <stdio.h>
void display (char[],int,int,char[]);
int main() {
    int roll_no;
    int std;
    char name[50];
    char address[50];
    printf("Please enter name , roll_no , std , address:");
    scanf("%s %d %d %s",name, & roll_no,& std, address);
    return 0;
}
void display(char name[30],int roll_no,int std,char address[50])
{
    printf("Name of student is %s",name);
    printf("roll no of student is %d\n",roll_no);
    printf("std is %d/n",std);
    printf("address is %s",address);
}