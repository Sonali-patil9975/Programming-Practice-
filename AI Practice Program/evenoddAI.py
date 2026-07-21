def check_even_odd():
    """Accept a number from the user and check if it is even or odd."""
    num = int(input("Enter a number: "))  # get number from user, convert to int

    if num % 2 == 0:              # check if remainder when divided by 2 is 0
        print(num, "is Even")     # print if even
    else:
        print(num, "is Odd")      # print if odd (otherwise)

# Run check_even_odd() only if this script is executed directly
if __name__ == "__main__":
    check_even_odd()   # call the function