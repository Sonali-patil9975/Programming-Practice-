"""
Program: Print even numbers using a loop.

If n > 0:
    Prints even numbers from 1 to n.
If n < 0:
    Prints even numbers from -2 down to n.
If n == 0:
    Prints 0.
"""

# Take input from the user
n = int(input("Enter a number: "))

# Check if the number is positive
if n > 0:
    # Loop from 1 to n
    for i in range(1, n + 1):
        # Print only even numbers
        if i % 2 == 0:
            print(i)

# Check if the number is negative
elif n < 0:
    # Loop from -2 down to n
    for i in range(-2, n - 1, -1):
        # Print only even numbers
        if i % 2 == 0:
            print(i)

# If the number is zero
else:
    print(0)
