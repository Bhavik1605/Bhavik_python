'''
Write a Python function to calculate the factorial of a number.
The function accepts the number as an argument.
'''

def fact(n):
    if n < 0:
        return "Factorial is undefined for negative numbers"
    elif n == 0 or n == 1:
        return 1
    else:
        return n * fact(n - 1)

n=int(input("Input a Number to Compute The Factiorial : "))

print(f"The factorial of {n} is :",fact(n))
