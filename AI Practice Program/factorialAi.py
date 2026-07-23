"""
Factorial Calculator
--------------------
Reads a number from the user and calculates its factorial.
Negative numbers are rejected (not allowed).
Written for Python 3.11.
"""


def factorial(n: int) -> int:
    """
    Calculate the factorial of a non-negative integer n.

    Rules:
    - 0! = 1 (by mathematical definition)
    - n! = n x (n-1) x (n-2) x ... x 1

    Uses an iterative approach (loop) instead of recursion
    to avoid hitting Python's recursion limit for large n.
    """
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result


def get_number_from_user() -> int:
    """
    Prompt the user for a number.
    - Rejects negative numbers.
    - Rejects non-integer input.
    - Keeps asking until a valid non-negative integer is entered.
    """
    while True:
        user_input = input("Enter a non-negative integer: ").strip()
        try:
            number = int(user_input)
        except ValueError:
            print("Invalid input. Please enter a whole number.")
            continue

        if number < 0:
            print("Negative numbers are not allowed. Please try again.")
            continue

        return number


def main():
    """Main program: get user input and print its factorial."""
    number = get_number_from_user()
    result = factorial(number)
    print(f"{number}! = {result}")


# ---------------------------------------------------------------
# TEST CASES
# Run this file with `python factorial.py --test` to execute
# these checks instead of prompting for input.
# ---------------------------------------------------------------
def run_tests():
    """Simple test cases for the factorial() function."""
    test_cases = [
        (0, 1),        # 0! = 1 by definition
        (1, 1),        # 1! = 1
        (2, 2),        # 2! = 2 x 1
        (3, 6),        # 3! = 3 x 2 x 1
        (4, 24),       # 4! = 4 x 3 x 2 x 1
        (5, 120),      # 5! = 120
        (6, 720),      # 6! = 720
        (10, 3628800), # 10! = 3628800
    ]

    passed = 0
    for n, expected in test_cases:
        result = factorial(n)
        status = "PASS" if result == expected else "FAIL"
        if result == expected:
            passed += 1
        print(f"factorial({n}) = {result} | expected = {expected} | {status}")

    print(f"\n{passed}/{len(test_cases)} test cases passed.")


if __name__ == "__main__":
    import sys

    # Run test cases if "--test" is passed as a command-line argument
    if len(sys.argv) > 1 and sys.argv[1] == "--test":
        run_tests()
    else:
        main()