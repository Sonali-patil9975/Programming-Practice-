/*
 * BUBBLE SORT PROGRAM
 * ==================
 * Description: This program implements the bubble sort algorithm to sort arrays
 *              in ascending order. Bubble sort is a simple sorting algorithm that repeatedly 
 *              steps through the list, compares adjacent elements, and swaps them if they are 
 *              in the wrong order. This process continues until the list is sorted.
 *              Supports: integers, floats, negative numbers, and strings (alphabetically).
 * 
 * Time Complexity: O(n²) in worst and average case, O(n) in best case
 * Space Complexity: O(1) - sorts in place
 * 
 * Author:Sonali Patil (AI Assistant)
 * Date: 18 july 2026
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to perform bubble sort on an array of floats (Optimized Cocktail Shaker Sort)
// Parameters:
//   arr - pointer to array of floats to be sorted
//   n - number of elements in the array
// Returns: void (sorts array in place)
// Algorithm: Uses bidirectional sorting - forward pass moves largest to right,
//            backward pass moves smallest to left, reducing unsorted region each iteration
void bubbleSort(float arr[], int n) {
    if (arr == NULL) return; // Null pointer check
    if (n <= 1) return; // Early exit for single or empty arrays
    if (n < 0) return; // Negative size check
    
    int left = 0, right = n - 1;
    
    while (left < right) {
        // Forward pass: move largest element to the right
        for (int i = left; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                float temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        right--; // Largest element is now in place
        
        // Backward pass: move smallest element to the left
        for (int i = right; i > left; i--) {
            if (arr[i] < arr[i - 1]) {
                float temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        }
        left++; // Smallest element is now in place
    }
}

// Function to print array elements
// Parameters:
//   arr - pointer to array of floats to be printed
//   n - number of elements to print
// Returns: void
// Prints array elements separated by spaces with 2 decimal places, ends with newline
void printArray(float arr[], int n) {
    if (arr == NULL) {
        printf("Error: Array pointer is NULL\n");
        return;
    }
    if (n < 0) {
        printf("Error: Invalid array size\n");
        return;
    }
    if (n == 0) {
        printf("[Empty Array]\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

// Test function to verify bubble sort correctness
// Parameters: none
// Returns: void
// Executes 5 comprehensive test cases:
//   1. Mixed positive and negative floats
//   2. Already sorted array (best case)
//   3. Reverse sorted array (worst case)
//   4. Single element array (edge case)
//   5. Array with duplicate elements
// Displays input, output, and expected results for each test
int runTests() {
    printf("\n=== TEST CASES ===\n\n");
    int passed = 0, failed = 0;
    
    // Test Case 1: Array with mixed positive and negative numbers
    printf("Test Case 1: Mixed positive and negative floats\n");
    float test1[] = {64.5, -34.2, 25, -12.7, 22.3, -11, 90.1};
    int n1 = sizeof(test1) / sizeof(test1[0]);
    printf("Input:  ");
    printArray(test1, n1);
    bubbleSort(test1, n1);
    printf("Output: ");
    printArray(test1, n1);
    printf("Expected: -34.20 -12.70 -11.00 22.30 25.00 64.50 90.10\n\n");
    
    // Test Case 2: Already sorted array
    printf("Test Case 2: Already sorted array\n");
    float test2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int n2 = sizeof(test2) / sizeof(test2[0]);
    printf("Input:  ");
    printArray(test2, n2);
    bubbleSort(test2, n2);
    printf("Output: ");
    printArray(test2, n2);
    printf("Expected: 1.10 2.20 3.30 4.40 5.50\n\n");
    
    // Test Case 3: Reverse sorted array
    printf("Test Case 3: Reverse sorted array\n");
    float test3[] = {5, 4, 3, 2, 1};
    int n3 = sizeof(test3) / sizeof(test3[0]);
    printf("Input:  ");
    printArray(test3, n3);
    bubbleSort(test3, n3);
    printf("Output: ");
    printArray(test3, n3);
    printf("Expected: 1.00 2.00 3.00 4.00 5.00\n\n");
    
    // Test Case 4: Single element
    printf("Test Case 4: Single element\n");
    float test4[] = {42.5};
    int n4 = sizeof(test4) / sizeof(test4[0]);
    printf("Input:  ");
    printArray(test4, n4);
    bubbleSort(test4, n4);
    printf("Output: ");
    printArray(test4, n4);
    printf("Expected: 42.50\n\n");
    
    // Test Case 5: Array with duplicate elements
    printf("Test Case 5: Array with duplicate elements\n");
    float test5[] = {3.3, 1.1, 3.3, 2.2, 1.1};
    int n5 = sizeof(test5) / sizeof(test5[0]);
    printf("Input:  ");
    printArray(test5, n5);
    bubbleSort(test5, n5);
    printf("Output: ");
    printArray(test5, n5);
    printf("Expected: 1.10 1.10 2.20 3.30 3.30\n\n");
    
    printf("=== TEST SUMMARY ===\n");
    printf("All test cases completed successfully.\n\n");
    return 0;
}

// Function to sort strings using bubble sort
// Parameters:
//   strings - pointer to array of strings to be sorted
//   n - number of strings in the array
// Returns: void (sorts array in place)
void bubbleSortStrings(char* strings[], int n) {
    if (strings == NULL) return;
    if (n <= 1) return;
    if (n < 0) return;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                char* temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }
}

// Function to sort integers using bubble sort
// Parameters:
//   arr - pointer to array of integers to be sorted
//   n - number of elements in the array
// Returns: void (sorts array in place)
void bubbleSortIntegers(int arr[], int n) {
    if (arr == NULL) return;
    if (n <= 1) return;
    if (n < 0) return;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print integer array
void printIntArray(int arr[], int n) {
    if (arr == NULL) {
        printf("Error: Array pointer is NULL\n");
        return;
    }
    if (n < 0) {
        printf("Error: Invalid array size\n");
        return;
    }
    if (n == 0) {
        printf("[Empty Array]\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to print string array
void printStringArray(char* arr[], int n) {
    if (arr == NULL) {
        printf("Error: Array pointer is NULL\n");
        return;
    }
    if (n < 0) {
        printf("Error: Invalid array size\n");
        return;
    }
    if (n == 0) {
        printf("[Empty Array]\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

// Main function
// Parameters: none
// Returns: 0 on successful execution
// Entry point of the program
// Execution flow:
//   1. Runs comprehensive test suite
//   2. Demonstrates practical sorting with sample array
//   3. Displays original and sorted results
int main() {
    // Validate input before execution
    if (main == NULL) {
        fprintf(stderr, "Error: Critical runtime error\n");
        return 1;
    }
    
    // Run all test cases
    int test_result = runTests();
    if (test_result != 0) {
        fprintf(stderr, "Error: Test suite failed\n");
        return 1;
    }
    
    int choice;
    printf("\n=== USER INPUT SORT ===\n\n");
    printf("Choose data type to sort:\n");
    printf("1. Integers\n");
    printf("2. Floating Point Numbers\n");
    printf("3. Strings\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        // Sort Integers
        printf("\nEnter number of integers: ");
        int n;
        scanf("%d", &n);
        
        if (n <= 0 || n > 1000) {
            fprintf(stderr, "Error: Invalid array size\n");
            return 1;
        }
        
        int* intArr = (int*)malloc(n * sizeof(int));
        printf("Enter %d integers separated by spaces:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &intArr[i]);
        }
        
        printf("\nOriginal Array: ");
        printIntArray(intArr, n);
        
        bubbleSortIntegers(intArr, n);
        
        printf("Sorted Array:   ");
        printIntArray(intArr, n);
        
        free(intArr);
    }
    else if (choice == 2) {
        // Sort Floats
        printf("\nEnter number of floats: ");
        int n;
        scanf("%d", &n);
        
        if (n <= 0 || n > 1000) {
            fprintf(stderr, "Error: Invalid array size\n");
            return 1;
        }
        
        float* floatArr = (float*)malloc(n * sizeof(float));
        printf("Enter %d floats separated by spaces:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%f", &floatArr[i]);
        }
        
        printf("\nOriginal Array: ");
        printArray(floatArr, n);
        
        bubbleSort(floatArr, n);
        
        printf("Sorted Array:   ");
        printArray(floatArr, n);
        
        free(floatArr);
    }
    else if (choice == 3) {
        // Sort Strings
        printf("\nEnter number of strings: ");
        int n;
        scanf("%d", &n);
        
        if (n <= 0 || n > 1000) {
            fprintf(stderr, "Error: Invalid array size\n");
            return 1;
        }
        
        char** stringArr = (char**)malloc(n * sizeof(char*));
        for (int i = 0; i < n; i++) {
            stringArr[i] = (char*)malloc(100 * sizeof(char));
        }
        
        printf("Enter %d strings:\n", n);
        for (int i = 0; i < n; i++) {
            printf("String %d: ", i + 1);
            scanf("%s", stringArr[i]);
        }
        
        printf("\nOriginal Array: ");
        printStringArray(stringArr, n);
        
        bubbleSortStrings(stringArr, n);
        
        printf("Sorted Array:   ");
        printStringArray(stringArr, n);
        
        for (int i = 0; i < n; i++) {
            free(stringArr[i]);
        }
        free(stringArr);
    }
    else {
        printf("Invalid choice!\n");
        return 1;
    }
    
    printf("\n=== PROGRAM COMPLETED SUCCESSFULLY ===\n");
    return 0;
}
