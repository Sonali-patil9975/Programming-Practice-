// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("This programm calculate addition of within given range\n");
    int start=0,sum=0,i=0,end=0;
    printf("plese give start and end");
    scanf("%d,%d",&start,&end);
    for(i=start;i<=end;i++);{
        sum=sum+i;
    }
    printf("%d",sum);

    return 0;
}