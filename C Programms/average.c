// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("This program calculate average of given n number\n");
    int range=0,num=0,sum=0,i=0,average=0;
    printf("please given numbers");
    scanf("%d",&range);
    for(i=0;i<range;i++){
        printf("please enter number %d\n",i);
        scanf("%d",&num);
        sum=sum+num;
    }
    average=sum/range;
    printf("average of given n number is%d",average);

    return 0;
}