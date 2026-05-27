/* Author: Sonali patil
   Date: 26 May 2026
   this program is to store reverse of string in C
*/
// This program store reverse of string
#include <stdio.h>
int string_length(char array[])
{
    int i=0;
    if (array == NULL)
    return 0;
    while (array[i] != '\0'){
        i++;
    }
    return i;
}
int main(){
    char str1[50];
    char str2[50];
    printf("Please enter name:");
    scanf("%s",str1);
    int length=string_length(str1);
    //printf("length = %d", length);
    int i=0;
    int j=0;
    for(i=length-1,j=0;i>=0;i--,j++){
        str2[j]=str1[i];
    }
    str2[j] = '\0';
    printf("reverse is %s",str2);
    return 0;
}