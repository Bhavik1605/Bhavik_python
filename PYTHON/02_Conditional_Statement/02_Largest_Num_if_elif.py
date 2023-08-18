# Python program to find the largest number among the three input numbers


num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))
num3 = float(input("Enter third number: "))

if (num1 >= num2) and (num1 >= num3):
   larg = num1
elif (num2 >= num1) and (num2 >= num3):
   larg = num2
else:
   larg = num3

print("The largest number is :", larg)
