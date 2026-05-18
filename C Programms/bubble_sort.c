
/*Author: Sonali Patil
date: 13 May 2026
this program is to sort the array using bubble sort algorithm
*/

#include <stdio.h>
void bubble_sort (int[],int);
void print_array (int[],int);
int main(void) {
    int n, i;
    int arr[50];
    
    
    printf("Enter array of intergers:");
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("array befor sorting");
    print_array(arr,n);
    printf("array after sorting");
    bubble_sort(arr,n);
    print_array(arr,n);
    return 0;
}
void print_array (int arr[],int n){
    int i = 0;
    for (i = 0; i < n;i++){
        printf("%d  ",arr[i]);
    }
}
void bubble_sort (int arr[],int n){
    int i = 0, j =0, pass = n, temp;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if (arr[i] > arr[j+1])
            temp = arr[j];
            arr[j] = arr[j+1];
            arr [j +1] = temp;
        }
    }
}
    