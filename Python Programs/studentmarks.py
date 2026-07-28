n = int(input("number of subjects: "))
average = 0
std_marks = 0
for i in range(n):
    mark = int(input(f"Enter marks for subject {i+1}: "))
    std_marks = std_marks + mark
average = std_marks / n
print("Average marks:", average)
if average >= 90:
    print("Grade: distinction")
elif average >= 80:
    print("Grade: A")
elif average >= 70:
    print("Grade: B")
elif average >= 60:
    print("Grade: C")
elif average >= 35:
    print("Grade: pass")
elif average < 35:
    print("Grade: fail")