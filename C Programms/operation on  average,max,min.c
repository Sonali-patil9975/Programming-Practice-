/* Author: Sonali Patil
   Date: 28 May 2016
   this program finds average, maximum and minimum of three numbers
*/

// this program finds average, maximum and minimum of three numbers
#include <stdio.h>
//Funtion declaration
int average (int a,int b,int c);
int max(int a,int b,int c);
int min(int a,int b, int c);

int main() {
    int a,b,c;
    printf("Enter three number:");
    scanf("%d %d %d",&a, &b, &c);
    printf("average = %d\n",average(a,b,c));
    printf("max = %d\n",max(a,b,c));
    printf("min = %d\n",min (a,b,c));
    return 0;
}
//Funtion to find average
int average (int a, int b, int c)
{
    return (a+b+c)/3;
}
//function to find max
int max(int a, int b, int c)
{
    if (a >= b && a >= c)
    return a;
    else if(b >= a && b >=c)
    return b;
    else
    return c;
}
//Funtion to find min
int min(int a,int b, int c){
    if (a <= b && a <= c )
    return a;
    else if (b <= a && b <= c)
    return b;
    else 
    return c;
}

