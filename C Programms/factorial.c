// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int counter=0,num=0,fact=1;
    //this program calculate the factorial of a number
    printf("enter a number");
    scanf("%d",&num);
    for (counter=1;counter<=num;counter++){
        fact=fact*counter;
    }
    printf("factorial of%d= %d",num,fact);
    

    return 0;
}