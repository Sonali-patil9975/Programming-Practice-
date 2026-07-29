"""
Subject Marks, Average, and Grade Calculator
----------------------------------------------
This program:
1. Reads the number of subjects from the user.
2. Reads the subject name and marks for each subject.
3. Calculates the total and average marks.
4. Determines the grade based on the average.
5. Prints the subject-wise marks, average, and grade.

Grading Scale:
    Average >= 90 -> A+
    Average >= 80 -> A
    Average >= 70 -> B
    Average >= 60 -> C
    Average >= 50 -> D
    Average <  50 -> F
"""


def calculate_average(marks_list: list) -> float:
    """
    Calculate the average of a list of marks.

    Args:
        marks_list (list): List of numeric marks.

    Returns:
        float: The average of the marks.

    Raises:
        ValueError: If the marks_list is empty.
    """
    if not marks_list:
        raise ValueError("Marks list cannot be empty.")
    return sum(marks_list) / len(marks_list)


def calculate_grade(average: float) -> str:
    """
    Determine the grade based on the average marks.

    Args:
        average (float): The average marks (expected between 0 and 100).

    Returns:
        str: The grade corresponding to the average.
    """
    if average >= 90:
        return "distinction"
    elif average >= 80:
        return "A"
    elif average >= 70:
        return "B"
    elif average >= 60:
        return "C"
    elif average >= 35:
        return "pass"
    else:
        return "F"


def validate_marks(marks: float) -> float:
    """
    Validate that marks are within the range 0 to 100.

    Args:
        marks (float): Marks to validate.

    Returns:
        float: The validated marks (0 if invalid range).
    """
    if marks < 0 or marks > 100:
        print("Marks should be between 0 and 100. Setting to 0.")
        return 0
    return marks


def main():
    """Read subjects and marks from the user, then print average and grade."""
    subjects = {}  # dictionary to store subject:marks pairs

    # Take number of subjects from the user
    try:
        num_subjects = int(input("Enter the number of subjects: "))
        if num_subjects <= 0:
            print("Number of subjects must be greater than zero.")
            return
    except ValueError:
        print("Invalid input. Please enter a valid number.")
        return

    # Read each subject name and marks
    for i in range(num_subjects):
        subject = input(f"Enter name of subject {i + 1}: ")
        try:
            marks = float(input(f"Enter marks for {subject} (out of 100): "))
            marks = validate_marks(marks)
        except ValueError:
            print("Invalid marks entered. Setting to 0.")
            marks = 0

        subjects[subject] = marks

    # Calculate average using the marks values
    average = calculate_average(list(subjects.values()))

    # Determine grade based on average
    grade = calculate_grade(average)

    # Print subject-wise marks
    print("\n----- Marks Summary -----")
    for subject, marks in subjects.items():
        print(f"{subject}: {marks}")

    # Print average and grade
    print(f"\nTotal Marks: {sum(subjects.values())}")
    print(f"Average Marks: {average:.2f}")
    print(f"Grade: {grade}")


if __name__ == "__main__":
    main()