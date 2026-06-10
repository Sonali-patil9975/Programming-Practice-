/* Author: Sonali Patil
   Date: 09 june 2026
   Description: This program counts the number of vowels in a string using functions.
*/

// This program counts the number of vowels in a string using functions
#include <stdio.h>
int check_vowels(char[]);
int string_length(char[]);
int main() 
{
    int count;
    char str[50];
    printf("Enter string:");
    scanf("%s",str);
    count = check_vowels(str);
    if (count == 0)
    printf("%s does not cantain vowels",str);
    else
    printf("%s cantains %d vowels",str,count);

    return 0;
}
int string_length(char array[])
{
    int i = 0;
    if (array == NULL)
    return 0;
    while (array[i] != '\0')
    {
        i++;
    }
    return i;
}
// Funtion declaration
int check_vowels(char str[]){
    int n, i;
    int vowels_count = 0;
    char vowels[] = {'a','e','i','o','u'};
    n = string_length(str);
    for(i = 0; i < n; i++)
    {
        if 
        (str[i] == vowels[0]||
        str[i] == vowels[1]||
        str[i] == vowels[2]||
        str[i] == vowels[3]||
        str[i] == vowels[4])
        {
            vowels_count ++;
        }
    }   
    if (vowels_count == 0)
    return 0;
    else return vowels_count;
}
        
    
