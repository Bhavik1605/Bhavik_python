# Write a Python program that will return true if the two given integer values are equal or their sum or difference is 5.

num1 = int(input("Enter The First Integer : "))
num2 = int(input("Enter The Second Integer : "))
    
if num1 == num2 or num1 - num2 == 5 or num1 + num2 == 5:
    print("True")
else:
    print("False")
