# Prograam to Check Whether a Number(Accept from User) is Positive or Negative.

num=int(input("Enter a Number : "))

if num==0:
    print("\nEntered Number Is Zero.")
elif num>0:
    print("\n{} Number Is Positive Number.".format(num))
else:
    print("\n{} Number Is Negative Number.".format(num))
