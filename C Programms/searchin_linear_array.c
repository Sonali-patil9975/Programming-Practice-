/* Author: Sonali Patil
   Date: 11 june 2026
   Description: This program search in linear array in C language.
*/

// This program search in linear array in C language.
#include<stdio.h>
// Funtion declaration
int search_array(int[],int, int);
int main()
{
    int arr[5]={10,20,30,40,50};
    int num,result;
    printf("Enter number to search:");
    scanf("%d",&num);
    int length = sizeof(arr)/sizeof(int);
    result = search_array(arr,num, length);
    if (result == -1)
    printf("Number not found");
    else
    printf("number found at %d position",result);
}
int search_array(int arr[5],int num, int length)
{
    int i=0;

    for(i = 0; i < length; i++)
    {
        if (arr[i] == num)
        return i;
    }
    return -1;
}