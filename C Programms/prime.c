// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num=0,i=2;
    // Write C code here
    printf("Please enter number to check prime or not");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0){
    
            printf("%d is not prime",num);
            break;
            
        }
        }
if( num==i){
    printf("%d is prime",num);
}

return 0;

}