"""
Program: Print the multiplication table of a number.

This program:
1. Takes a number as input from the user.
2. Prints its multiplication table from 1 to 10.
"""

# Take input from the user
num = int(input("Enter a number: "))

# Print the table from 1 to 10
print(f"\nMultiplication Table of {num}")

for i in range(1, 11):
    # Display the multiplication result
    print(f"{num} x {i} = {num * i}")
