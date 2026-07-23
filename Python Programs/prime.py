def main():
    n = int(input("Enter a number: "))
    flag = 0
    for i in range(2,n-1):
        if n % i == 0:
            print("Not Prime")
            flag = 1
            break

    if flag == 0:    
        print("Prime")
if __name__ == "__main__":
    main()               