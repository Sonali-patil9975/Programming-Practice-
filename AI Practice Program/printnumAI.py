"""
Program: Print numbers based on user input.

If n > 0:
    Prints numbers from 1 to n.
If n < 0:
    Prints numbers from -1 to n.
If n == 0:
    Prints 0.
"""

# Take input from the user
n = int(input("Enter a number: "))

# Check whether the number is positive, negative, or zero
if n > 0:
    # Print numbers from 1 to n
    for i in range(1, n + 1):
        print(i)

elif n < 0:
    # Print numbers from -1 to n
    for i in range(-1, n - 1, -1):
        print(i)

else:
    # If the user enters 0
    print(0)
