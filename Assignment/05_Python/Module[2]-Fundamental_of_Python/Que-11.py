# Write a python program to sum of the first n positive integers.

n = int(input("Enter a Positive Integer : "))
    
if n <= 0:
    print("Please Enter a Positive Integer.")
else:
    sum = 0
    for i in range(1, n + 1):
        sum += i
    print(f"The Sum of The First {n} Positive Integers is : {sum}")
