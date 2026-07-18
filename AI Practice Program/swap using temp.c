/*
 * Program     : Generic Swap Program (int, float, char)
 * Author      : Your Name
 * Date        : 18-07-2026
 * Description : This program swaps the values of two variables.
 *               It supports integers (positive/negative), floating-point
 *               numbers (positive/negative), and alphabetic characters,
 *               using the classic temporary-variable swap technique.
 *               Test cases are included to verify correctness.
 */

#include <stdio.h>

// ---------------------------------------------------
// Function Declarations
// ---------------------------------------------------
void swapInt(int *a, int *b);
void swapFloat(float *a, float *b);
void swapChar(char *a, char *b);

// ---------------------------------------------------
// Function Definitions
// ---------------------------------------------------

// Swap two integers (works for positive and negative values)
void swapInt(int *a, int *b) {
    int temp = *a;   // store value of a temporarily
    *a = *b;         // put b's value into a
    *b = temp;       // put original a's value into b
}

// Swap two floats (works for positive and negative values)
void swapFloat(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Swap two characters (works for alphabetic letters, upper/lowercase)
void swapChar(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// ---------------------------------------------------
// Function to run test cases
// ---------------------------------------------------
void runTestCases() {
    printf("--- Running Test Cases ---\n\n");

    // ---------- Integer Test Cases ----------
    printf("Integer Swap Tests:\n");
    struct { int a, b; } intTests[] = {
        {5, 10},        // positive, positive
        {-3, 8},        // negative, positive
        {-7, -20},      // negative, negative
        {0, 15}         // zero, positive
    };
    int numIntTests = sizeof(intTests) / sizeof(intTests[0]);

    for (int i = 0; i < numIntTests; i++) {
        int a = intTests[i].a, b = intTests[i].b;
        printf("Before: a=%d, b=%d | ", a, b);
        swapInt(&a, &b);
        printf("After: a=%d, b=%d | %s\n",
               a, b, (a == intTests[i].b && b == intTests[i].a) ? "PASS" : "FAIL");
    }

    // ---------- Float Test Cases ----------
    printf("\nFloat Swap Tests:\n");
    struct { float a, b; } floatTests[] = {
        {3.5f, 7.2f},      // positive, positive
        {-1.1f, 4.4f},     // negative, positive
        {-9.9f, -2.2f},    // negative, negative
        {0.0f, 6.6f}       // zero, positive
    };
    int numFloatTests = sizeof(floatTests) / sizeof(floatTests[0]);

    for (int i = 0; i < numFloatTests; i++) {
        float a = floatTests[i].a, b = floatTests[i].b;
        printf("Before: a=%.2f, b=%.2f | ", a, b);
        swapFloat(&a, &b);
        printf("After: a=%.2f, b=%.2f | %s\n",
               a, b, (a == floatTests[i].b && b == floatTests[i].a) ? "PASS" : "FAIL");
    }

    // ---------- Character Test Cases ----------
    printf("\nCharacter Swap Tests:\n");
    struct { char a, b; } charTests[] = {
        {'A', 'Z'},   // uppercase letters
        {'m', 'p'},   // lowercase letters
        {'X', 'a'},   // mixed case
        {'g', 'g'}    // same letter (edge case)
    };
    int numCharTests = sizeof(charTests) / sizeof(charTests[0]);

    for (int i = 0; i < numCharTests; i++) {
        char a = charTests[i].a, b = charTests[i].b;
        printf("Before: a=%c, b=%c | ", a, b);
        swapChar(&a, &b);
        printf("After: a=%c, b=%c | %s\n",
               a, b, (a == charTests[i].b && b == charTests[i].a) ? "PASS" : "FAIL");
    }

    printf("\n--- Test Cases Completed ---\n\n");
}

// ---------------------------------------------------
// Main Program (Interactive)
// ---------------------------------------------------
int main() {
    int choice;

    // Run test cases first to confirm logic works
    runTestCases();

    do {
        printf("Choose data type to swap:\n");
        printf("1. Integer\n2. Float\n3. Character (Letter)\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int a, b;
            printf("Enter two integers (can be negative): ");
            scanf("%d %d", &a, &b);
            printf("Before Swap: a=%d, b=%d\n", a, b);
            swapInt(&a, &b);
            printf("After Swap : a=%d, b=%d\n\n", a, b);
        }
        else if (choice == 2) {
            float a, b;
            printf("Enter two floats (can be negative): ");
            scanf("%f %f", &a, &b);
            printf("Before Swap: a=%.2f, b=%.2f\n", a, b);
            swapFloat(&a, &b);
            printf("After Swap : a=%.2f, b=%.2f\n\n", a, b);
        }
        else if (choice == 3) {
            char a, b;
            printf("Enter two letters: ");
            scanf(" %c %c", &a, &b);
            printf("Before Swap: a=%c, b=%c\n", a, b);
            swapChar(&a, &b);
            printf("After Swap : a=%c, b=%c\n\n", a, b);
        }
        else if (choice != 4) {
            printf("Invalid choice, try again.\n\n");
        }

    } while (choice != 4);

    printf("Program ended. Goodbye!\n");
    return 0;
}