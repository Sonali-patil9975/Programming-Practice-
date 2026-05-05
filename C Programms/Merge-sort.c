/* Author: Sonali Patil
   Date: 05-05-2026
   Description: C program to sort an array using merge sort.
*/
// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
// Merges two subarray of arr[]
// First subarray is arr [left...mid]
// Second subarray is arr [mid + 1...right]
void merge (int arr[],int left,int mid,int right)
{
    int i, j, k;

    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int left_arr[3];
    int right_arr[3];
// Copy data to temp arrays left_arr and right_arr
    for (i = 0; i < n1; i++)
     left_arr[i] = arr[left+i];
     
    for (j = 0; j < n2; j++)
     right_arr[j] = arr [mid + 1 + j];
// Merge the temporary arrays back into arr[left
i =0;
j=0;
k=left;
while (i < n1 && j < n2){
    if (left_arr[i] <= right_arr[j]){
        arr[k] = left_arr[i];
        i++;
    }
    else{
        arr[k] = right_arr[j];
        j++;
    }
    k++;
}
  //copy the remaining elements of left arr[],if any
  while (i<n1){
      arr[k] = left_arr [i];
      i++;
      k++;
  }
// Copy the remaining element of right arr[],if any
while (j < n2){
    arr [k] = right_arr[j];
    j++;
    k++;
  }
}
//the subarrays to be sorted is in the index range [left - right];
void merge_sort (int arr[], int left, int right){
    if (left < right){
// Calculate the midpoint
int mid = left + (right - left)/2;
//sort first and second halves

merge_sort(arr,left,mid);
merge_sort(arr,mid+1,right);   
merge(arr,left,mid,right);
    }
}

int main() {
    int arr[] = {12,11,13,5,6,7};
    int n =sizeof(arr) / sizeof(arr[0]);
   printf("before: ");
    for (int i = 0; i < n ; i++)
    printf("%d ", arr[i]);
// Sorting arr using mergesort
printf("\n");
merge_sort(arr, 0, n-1);
for (int i = 0; i < n ; i++)
    printf("%d ", arr[i]);

    return 0;
}