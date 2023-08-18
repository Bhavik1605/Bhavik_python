# Factorial of a number
n = int(input("Enter number: "))
if(n == 0 or n < 0):
    print("Value of n should be greater than 1")
else:
    fact=1
    for i in range(1,n+1):
        fact *= i
    print("The Factorial of [",n,"] is :",fact)
