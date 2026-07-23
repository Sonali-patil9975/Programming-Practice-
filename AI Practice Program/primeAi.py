"""
Prime Number Checker
--------------------
Reads a number from the user and checks whether it is prime or not.
Negative numbers are rejected (not allowed).
Written for Python 3.11.
"""


def is_prime(n: int) -> bool:
    """
    Check whether a non-negative integer n is a prime number.

    Rules:
    - Numbers less than 2 (0, 1) are NOT prime.
    - 2 is the only even prime number.
    - For any number > 2, we only need to check divisibility
      up to its square root, since a larger factor pair would
      already have been caught by a smaller one.
    """
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False

    # Check odd divisors up to sqrt(n)
    for i in range(3, int(n ** 0.5) + 1, 2):
        if n % i == 0:
            return False
    return True


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
    """Main program: get user input and report prime status."""
    number = get_number_from_user()

    if is_prime(number):
        print(f"{number} is a PRIME number.")
    else:
        print(f"{number} is NOT a prime number.")


# ---------------------------------------------------------------
# TEST CASES
# Run this file with `python prime_checker.py --test` to execute
# these checks instead of prompting for input.
# ---------------------------------------------------------------
def run_tests():
    """Simple test cases for the is_prime() function."""
    test_cases = [
        (0, False),    # 0 is not prime
        (1, False),    # 1 is not prime
        (2, True),     # smallest prime, and only even prime
        (3, True),     # prime
        (4, False),    # 2 x 2
        (5, True),     # prime
        (9, False),    # 3 x 3
        (17, True),    # prime
        (18, False),   # even, not prime
        (19, True),    # prime
        (97, True),    # larger prime
        (100, False),  # even, not prime
    ]

    passed = 0
    for n, expected in test_cases:
        result = is_prime(n)
        status = "PASS" if result == expected else "FAIL"
        if result == expected:
            passed += 1
        print(f"is_prime({n}) = {result} | expected = {expected} | {status}")

    print(f"\n{passed}/{len(test_cases)} test cases passed.")


if __name__ == "__main__":
    import sys

    # Run test cases if "--test" is passed as a command-line argument
    if len(sys.argv) > 1 and sys.argv[1] == "--test":
        run_tests()
    else:
        main()