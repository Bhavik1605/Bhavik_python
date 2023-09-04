# Simple Calculator using function
 
def add():
    tot = num1 + num2
    print(f"{num1} + {num2} = {tot}")
 
def sub():
    sub = num1 - num2
    print(f"{num1} - {num2} = {sub}")
 
def mul():
    mul = num1 * num2
    print(f"{num1} x {num2} = {mul}")
 
def div():
    div = num1 / num2
    print(f"{num1} / {num2} = {div}")
 
operation = input("Choose an operation(+,-,*, /) : ")

num1 = float(input("Enter number 1 : "))
num2 = float(input("Enter number 2 : "))

if operation == "+":
    add()
elif operation == "-":
    sub()
elif operation == "*":
    mul()
elif operation == "/":
    div()
else:
    print(f"No operation for {operation} for now! sorry!")
