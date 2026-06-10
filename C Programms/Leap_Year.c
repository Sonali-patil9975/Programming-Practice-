/* Author: Sonali Patil
   Date: 10 june 2026
   Description: This program is to check whether the given year is a leap year or not.
*/

// This program is to check whether the given year is a leap year or not.
#include <stdio.h>
//Function declaration
void Leap_Year(int );

int main() {
    int Year;
    printf("Enter the Year:");
    scanf("%d",&Year);
    Leap_Year(Year);
    return 0;
}
// Funtion defination
void Leap_Year(int Year)
{
    if (Year % 4 == 0 && Year % 100 != 0)
    printf("Year is Leap Year");
    else
    printf("Year is not Leap Year");

    
}