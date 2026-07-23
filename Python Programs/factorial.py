def main():
    i = 1
    n = int(input("Enter a number: "))
    fact = 1
    while i <= n:
        fact *= i
        i += 1
    print("Factorial of", n, "is", fact)

if __name__ == "__main__":
    main()          