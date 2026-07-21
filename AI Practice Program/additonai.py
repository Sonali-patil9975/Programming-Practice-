def add_numbers():
    """Accept two integers from the user and return their sum."""
    num1 = int(input("Enter the first number: "))   # get first number from user
    num2 = int(input("Enter the second number: "))  # get second number from user
    result = num1 + num2                             # store the sum in result
    return result

# Run add_numbers() only if this script is executed directly
if __name__ == "__main__":
    result = add_numbers()      # call function and store returned value
    print("Sum:", result)       # print the result