/*Author: Sonali Patil
date: 26 May 2026
this program is to concatenate two strings without using library function.
*/

// this program concatenate two strings without using library function.
#include <stdio.h>
int string_length (char array[])
{
    int i = 0;
    if (array == NULL)
    return 0;
    while(array[i] != '\0')
    {
        i++;
    }
    return i;
}
int main() {
    int i;
    char str1[50],str2[50],str3[100];
    printf("Enter string1 and string2:");
    scanf("%s %s",str1,str2);
    int len1 = string_length(str1);
    int len2 = string_length(str2);
    for(i = 0; i < len1; i++){
        str3[i]=str1[i];
    }
    for (i = 0; i < len2; i++)
    {
        str3[len1+i]=str2[i];
    }
    str3[len1+len2]='\0';
    printf("String after concatination is %s",str3);

    return 0;
}