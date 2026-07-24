"""
Palindrome Checker
------------------
A palindrome is a sequence (number or string) that reads the same
forwards and backwards. Examples: "madam", "racecar", 121, 12321.

This program provides a function to check whether a given input
(number or string) is a palindrome or not, along with test cases.

Python version: 3.11
"""


def is_palindrome(value) -> bool:
    """
    Check whether the given value (int, float, or str) is a palindrome.

    Behavior differs slightly by type, matching common conventions:
      - Numbers (int/float): compared as-is (digit by digit). A leading
        '-' (negative sign) or a '.' (decimal point) breaks the symmetry,
        so negative numbers and most floats are NOT palindromes.
      - Strings: normalized before comparing -- lowercased, and only
        alphanumeric characters are kept (spaces/punctuation removed).
        This lets phrases like "A man a plan a canal Panama" and
        "Was it a car or a cat I saw?" be correctly detected as
        palindromes.

    Parameters:
        value (int | float | str): The number or string to check.

    Returns:
        bool: True if the value is a palindrome, False otherwise.
    """
    if isinstance(value, (int, float)):
        # For numbers, compare the exact string representation.
        # This means "-121" != "121-", so negative numbers correctly
        # fail, and "12.21" != "12.21"[::-1] so most floats fail too.
        text = str(value)
        return text == text[::-1]

    # For strings: lowercase and strip out non-alphanumeric characters
    # so that spacing, punctuation, and case don't affect the result.
    text = str(value).lower()
    cleaned = "".join(char for char in text if char.isalnum())

    # An empty string (after cleaning) is trivially a palindrome
    if cleaned == "":
        return True

    return cleaned == cleaned[::-1]


def run_tests():
    """
    Run a series of test cases to verify is_palindrome() works correctly.
    Prints PASS/FAIL for each case, and a summary at the end.
    """
    # Each tuple: (input_value, expected_result, description)
    test_cases = [
        (121, True, "Palindrome number"),
        (123, False, "Non-palindrome number"),
        (-121, False, "Negative number (the '-' breaks symmetry)"),
        (0, True, "Single digit number"),
        ("madam", True, "Palindrome word"),
        ("hello", False, "Non-palindrome word"),
        ("Racecar", True, "Palindrome word with mixed case"),
        ("A man a plan a canal Panama", True, "Palindrome phrase with spaces/case"),
        ("", True, "Empty string"),
        ("12321", True, "Palindrome numeric string"),
        ("Was it a car or a cat I saw?", True, "Palindrome phrase with punctuation"),
        ("Python", False, "Random non-palindrome word"),
        ("Able was I ere I saw Elba", True, "Classic palindrome sentence"),
        (12.21, True, "Float value that happens to be symmetric"),
        (12.34, False, "Float value that is not symmetric"),
        ("1221", True, "Even-length numeric palindrome"),
    ]

    passed = 0
    total = len(test_cases)

    print("Running test cases for is_palindrome()\n")
    print(f"{'Input':40} {'Expected':10} {'Got':10} {'Result'}")
    print("-" * 75)

    for value, expected, description in test_cases:
        result = is_palindrome(value)
        status = "PASS" if result == expected else "FAIL"
        if status == "PASS":
            passed += 1

        # Show input, expected vs actual, and pass/fail status
        print(f"{str(value)[:38]:40} {str(expected):10} {str(result):10} {status}  # {description}")

    print("-" * 75)
    print(f"Summary: {passed}/{total} test cases passed.\n")


def main():
    """
    Interactive entry point: ask the user for input and check if it's
    a palindrome. Also runs the automated test suite.
    """
    # First run the automated tests
    run_tests()

    # Then allow interactive checking (guarded in case there's no stdin,
    # e.g. when the script is run non-interactively)
    try:
        user_input = input("Enter a number or string to check (or press Enter to skip): ")
    except EOFError:
        user_input = ""

    if user_input.strip() != "":
        if is_palindrome(user_input):
            print(f"'{user_input}' IS a palindrome.")
        else:
            print(f"'{user_input}' is NOT a palindrome.")


if __name__ == "__main__":
    main()