/* Author: Sonali Patil
   Date: 26 May 2026
   this program is to print reverse of string in C
*/
// This program print reverse of string
#include <stdio.h>
int string_length (char array[])
{
    int i = 0;
    if (array == NULL)
    return 0;
    while(array[i]!='\0')
    {
        i++;
    }
    return i;
}

int main() {
    char str[50];
    printf("Please enter name:");
    scanf("%s",str);
    int length = string_length(str);
    int i=0;
    for (i=length-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}