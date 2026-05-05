/* Author: Sonali Patil
   Date: 04-05-2026
   Description: C program to sort an array using insertion sort.
*/
// this program to sort an array using insertion sort
#include <stdio.h>
#include<math.h>
void insertion_sort(int arr[],int N){
//starting from the second element
    for(int i=1;i<N;i++){
        int key = arr[i];
        int j = i-1;
// move element of arr[0...i-1],that are
//greater than key,to one position to
//the right of their current position
while (j >= 0 && arr[j] > key){
    arr[j+1] = arr[j];
    j = j-1;
}
// Move the key to its correct position
arr [j+1] = key;
    }
}

int main() {
    int arr[]={12 , 11 , 13 , 5 , 6};
    int N = sizeof(arr)/sizeof(arr [0]);
    printf("unsort array:");
    for (int i = 0 ; i < N; i++){
        printf("%d" , arr [i]);
    }
    printf("\n");
//calling insertion sort on array arr insertion sort arr[arr,N];
printf("sorted array:");
for (int i = 0;i < N ; i++){
    printf("%d" , arr [i]);
}
    printf("\n");
    return 0;
}