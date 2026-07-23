
def main():
    num = int(input("Enter a number: "))
    original = num
    sum = 0
    digit = 0
    while num > 0:
        digit = num % 10
        sum = sum + digit
        num = num // 10
    print (sum)

if __name__ == "__main__":
    main()          
