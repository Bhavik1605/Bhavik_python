# Write a Python program to get the Fibonacci series of given range.

m=int(input("Enter No. of terms the user wants to print Fibonacci Series : "))
a,b=0,1

print("The fibonacci Series :",a,end=" ")

for i in range(1,m):
    print(b,end=" ")
    a,b=b,a+b
