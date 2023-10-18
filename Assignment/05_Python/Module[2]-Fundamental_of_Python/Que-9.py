# Write a Python program to sum of three given integers. However, if two values are equal sum will be zero.

x = int(input("Enter First Number : "))

y = int(input("Enter Second Number : "))

z = int(input("Enter Third Number : "))


if x == y or y == z or z == x:
    sum = 0
else:
    sum = x + y + z
    
print("Your Total Sum Value is :",sum)
