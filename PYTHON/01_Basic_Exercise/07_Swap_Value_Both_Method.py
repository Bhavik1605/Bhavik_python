#Write python program that swap two number with temp variable and without temp variable.

print("--------Swap_Value_With_Temp_Variable-----------\n")

num1=int(input("Enter First Value : "))
num2=int(input("Enter Second Value : "))

temp=num1
num1=num2
num2=temp

print("\nAfter Swapping First Value :",num1,"& Second Value :",num2)

print("\n\n--------Swap_Value_Without_Temp_Variable----------\n")

num1=int(input("Enter First Value : "))
num2=int(input("Enter Second Value : "))

num1=num1+num2
num2=num1-num2
num1=num1-num2

print("\nAfter Swapping First Value :",num1,"& Second Value :",num2)
