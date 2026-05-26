/* Author: Sonali Patil
   Date: 26 May 2026
   This program is to calculate the length of a string in C
*/
#include <stdio.h>

int main() {
    int i = 0;
    char array[50] = {'0'};
    char abc[10] = "abc";
    printf("Please enter name:");
    scanf("%s",array);
    while(array[i]!= '\0'){
        printf("%c", array[i]);
        i++;
    }
    printf("Length of string %d\n",i);
    
    return 0;
}