def check_positive_negative():
    """Accept a number from the user and check if it is positive or negative."""
    num = int(input("Enter a number: "))  # get number from user, convert to int

    if num > 0:                      # check if number is greater than 0
        print(num, "is Positive")    # print if positive
    elif num < 0:                    # check if number is less than 0
        print(num, "is Negative")    # print if negative
    else:
        print(num, "is Zero")        # otherwise, it's zero

# Run check_positive_negative() only if this script is executed directly
if __name__ == "__main__":
    check_positive_negative()   # call the function