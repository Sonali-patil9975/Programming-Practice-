#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define SUBJECT_COUNT 7

// Structure to hold student information and academic data
struct Student {
    char name[100];
    int age;
    char address[200];
    int roll_number;
    char phone_number[20];
    char parent_name[100];
    int marks[SUBJECT_COUNT];
    double average;
    double percentage;
};

// Clear remaining characters from stdin after scanf
void flush_input(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        ;
    }
}

// Read a string with spaces using scanf and validate
void read_string(const char *prompt, char *dest, size_t size) {
    char format[32];
    snprintf(format, sizeof(format), " %%%zu[^\n]", size - 1);

    while (1) {
        printf("%s", prompt);
        if (scanf(format, dest) == 1) {
            flush_input();
            break;
        }
        flush_input();
        printf("Invalid input. Please try again.\n");
    }
}

// Read an integer value within a given range using scanf
int read_int(const char *prompt, int min, int max, const char *error_message) {
    int value;

    while (1) {
        printf("%s", prompt);
        if (scanf("%d", &value) == 1) {
            flush_input();
            if (value >= min && value <= max) {
                return value;
            }
        } else {
            flush_input();
        }
        printf("%s\n", error_message);
    }
}

// Calculate average and percentage from marks
void calculate_average_percentage(const int marks[], int count, double *average, double *percentage) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += marks[i];
    }
    *average = total / (double)count;
    *percentage = *average;
}

// Print the student details and results
void print_student_report(const struct Student *student, const char *subjects[]) {
    printf("\n--- Student Details ---\n");
    printf("Name          : %s\n", student->name);
    printf("Age           : %d\n", student->age);
    printf("Address       : %s\n", student->address);
    printf("Roll Number   : %d\n", student->roll_number);
    printf("Phone Number  : %s\n", student->phone_number);
    printf("Parent Name   : %s\n", student->parent_name);

    printf("\n--- Marks Obtained ---\n");
    for (int i = 0; i < SUBJECT_COUNT; i++) {
        printf("%s: %d\n", subjects[i], student->marks[i]);
    }

    printf("\nAverage marks  : %.2f\n", student->average);
    printf("Percentage     : %.2f%%\n", student->percentage);

    if (student->percentage > 75.0) {
        printf("Result         : Distinction\n");
    } else if (student->percentage > 60.0) {
        printf("Result         : First Class\n");
    } else if (student->percentage > 50.0) {
        printf("Result         : Second Class\n");
    } else if (student->percentage > 35.0) {
        printf("Result         : Pass Class\n");
    } else {
        printf("Result         : Fail\n");
    }
}

// Get grade classification based on percentage
const char *get_grade_classification(double percentage) {
    if (percentage > 75.0) {
        return "Distinction";
    } else if (percentage > 60.0) {
        return "First Class";
    } else if (percentage > 50.0) {
        return "Second Class";
    } else if (percentage > 35.0) {
        return "Pass Class";
    }
    return "Fail";
}

// Run structured test cases to validate grade computation and classification
void run_test_cases(void) {
    struct TestCase {
        int marks[SUBJECT_COUNT];
        const char *description;
        double expected_average;
        double expected_percentage;
        const char *expected_grade;
    };

    const struct TestCase test_cases[] = {
        {{90, 90, 90, 90, 90, 90, 90}, "All marks 90", 90.0, 90.0, "Distinction"},
        {{65, 65, 65, 65, 65, 65, 65}, "All marks 65", 65.0, 65.0, "First Class"},
        {{55, 55, 55, 55, 55, 55, 55}, "All marks 55", 55.0, 55.0, "Second Class"},
        {{40, 40, 40, 40, 40, 40, 40}, "All marks 40", 40.0, 40.0, "Pass Class"},
        {{35, 35, 35, 35, 35, 35, 35}, "All marks 35", 35.0, 35.0, "Fail"},
    };

    const int case_count = sizeof(test_cases) / sizeof(test_cases[0]);
    printf("\n--- Test cases ---\n");

    for (int i = 0; i < case_count; i++) {
        double average, percentage;
        calculate_average_percentage(test_cases[i].marks, SUBJECT_COUNT, &average, &percentage);
        const char *actual_grade = get_grade_classification(percentage);
        int pass = fabs(average - test_cases[i].expected_average) < 0.01 &&
                   fabs(percentage - test_cases[i].expected_percentage) < 0.01 &&
                   strcmp(actual_grade, test_cases[i].expected_grade) == 0;

        printf("Test %d: %s\n", i + 1, test_cases[i].description);
        printf("  Expected percentage: %.2f%%, actual: %.2f%%\n", test_cases[i].expected_percentage, percentage);
        printf("  Expected grade: %s, actual: %s\n", test_cases[i].expected_grade, actual_grade);
        printf("  Result: %s\n", pass ? "PASS" : "FAIL");
    }
}

int main(void) {
    struct Student student;
    const char *subjects[SUBJECT_COUNT] = {
        "SST", "Marathi", "Maths", "Stats", "Science", "Hindi", "German"
    };

    read_string("Enter student name: ", student.name, sizeof(student.name));
    student.age = read_int("Enter student age: ", 0, 200, "Invalid age. Please enter a non-negative integer.");
    read_string("Enter student address: ", student.address, sizeof(student.address));
    student.roll_number = read_int("Enter roll number: ", 0, 1000000, "Invalid roll number. Please enter a non-negative integer.");
    read_string("Enter phone number: ", student.phone_number, sizeof(student.phone_number));
    read_string("Enter parent name: ", student.parent_name, sizeof(student.parent_name));

    for (int i = 0; i < SUBJECT_COUNT; i++) {
        char prompt[100];
        snprintf(prompt, sizeof(prompt), "Enter marks obtained in %s (0-100): ", subjects[i]);
        student.marks[i] = read_int(prompt, 0, 100, "Invalid marks. Enter an integer between 0 and 100.");
    }

    calculate_average_percentage(student.marks, SUBJECT_COUNT, &student.average, &student.percentage);
    print_student_report(&student, subjects);
    run_test_cases();

    return 0;
}
