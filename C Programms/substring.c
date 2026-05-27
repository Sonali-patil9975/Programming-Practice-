/*Author: Sonali patil
  Date: 26 May 2026
  this program is to find substring in C

*/
// This program find substring
#include <stdio.h>
int string_length (char array[])
{
    int i=0;
    if (array == NULL)
    return 0;
    while(array[i]!='\0')
    {
        i++;
    }   
        return i;
}
//Function to find if str2 is substring of str1 int
int findsubstring(char str1[],char str2[]){
    int n=string_length(str1);
    int m=string_length(str2);
    int i=0;
    //Iterate though str1
    for( i=0;i<=n-m;i++){
        //Check for substring match
        int j;
        for(j=0;j<m;j++){
            // Missmatch found
            if (str1[i+j] != str2[j]){
                break;
            }
        }
     // If we complete the inner loop, we found a match
     if (j==m){
         // return starting index
         return i;
        }
    }
    // No match found
    return -1;
}

int main() {
    char str1[]="geeksforgeeks";
    char str2[]="eks";
    printf("subsring found at position %d",findsubstring (str1,str2));

    return 0;
}