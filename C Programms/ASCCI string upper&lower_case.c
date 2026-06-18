/* Author: Sonali Patil
   Date: 17 June 2026
   Description: This program is used to count the number of upper case and lower case letters in a string
*/
// This program is used to count the number of upper case and lower case letters in a string
#include <stdio.h>
int main() {
    char c;
    char str[50];
    int upper=0,lower=0,i;
    printf("Please enter string:");
    scanf("%s",str);
    for(i = 0;str[i] != '\0' ; i++ )
    if(str[i] <= 'Z' && str[i] >= 'A')
        upper ++;
    else if(str[i] >= 'a' && str[i] <= 'z')
        lower ++;
    printf("Upper case letter =%d\n",upper);    
    printf("Lower case letter =%d\n",lower);
    return 0;
}