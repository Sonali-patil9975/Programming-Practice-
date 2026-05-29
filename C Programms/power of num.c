/* Author: Sonali Patil
   Date: 28 May 2016
   this program finds the power of a number
*/

// this program finds the power of a number
#include <stdio.h>
// Funtion Declaration
int power(int num,int pow);
//Funtion defination
int power(int num,int pow){
    int i=1;
    int result =1;
    for (i=1;i<= pow;i++){
        result= result*num;
    }
    return result;
}
int main() {
    int num;
    int pow;
    int i=1;
    printf("Enter number:");
    scanf("%d", &num);
    
    printf("Enter power:");
    scanf("%d", &pow);
    printf("power of number is %d",power(num,pow));

    return 0;
}