
num = int(input("Enter a number: "))
sum = 0
original = num
while (num != 0):
    digit = num % 10
    num = num // 10
    sum = sum + (digit * digit * digit)

if sum == original:
    print("number is Armstrong number.")
else:
    print("number is not Armstrong number.")