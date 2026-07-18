/*
 * Program     : Even or Odd Number Checker
 * Author      : sonali Patil
 * Date        : 18-07-2026
 * Description : This program checks whether a given number is Even or Odd
 *               using the modulo operator, and runs test cases to verify
 *               that the logic works correctly using c.
 */

#include <stdio.h>

// ---------------------------------------------------
// Function Declaration
// ---------------------------------------------------
// Returns 1 if the number is Even, 0 if it is Odd
int isEven(int num);

// ---------------------------------------------------
// Function Definition
// ---------------------------------------------------
int isEven(int num) {
    // If remainder after dividing by 2 is 0 -> Even
    if (num % 2 == 0)
        return 1;   // Even
    else
        return 0;   // Odd
}

// ---------------------------------------------------
// Function to run test cases
// ---------------------------------------------------
void runTestCases() {
    // Structure to hold test data: input number and expected result
    struct TestCase {
        int input;
        int expected; // 1 = Even, 0 = Odd
    };

    // Array of test cases covering various scenarios
    struct TestCase tests[] = {
        {0, 1},     // 0 is even
        {2, 1},     // positive even
        {7, 0},     // positive odd
        {-4, 1},    // negative even
        {-9, 0},    // negative odd
        {100, 1},   // large even
        {101, 0}    // large odd
    };

    int numTests = sizeof(tests) / sizeof(tests[0]);

    printf("\n--- Running Test Cases ---\n");
    for (int i = 0; i < numTests; i++) {
        int actual = isEven(tests[i].input);
        const char *expectedStr = tests[i].expected ? "Even" : "Odd";
        const char *actualStr   = actual ? "Even" : "Odd";
        const char *status      = (actual == tests[i].expected) ? "PASS" : "FAIL";

        printf("Input: %5d | Expected: %4s | Got: %4s | %s\n",
               tests[i].input, expectedStr, actualStr, status);
    }
}

// ---------------------------------------------------
// Main Program
// ---------------------------------------------------
int main() {
    int num;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and display result
    if (isEven(num))
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    // Run test cases to verify correctness
    runTestCases();

    return 0;
}