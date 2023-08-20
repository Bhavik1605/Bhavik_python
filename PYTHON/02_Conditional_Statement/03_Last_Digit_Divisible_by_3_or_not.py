n=int(input("Enter any Number : "))
ld=n%10

if ld==0:
    print("Last Digit of Number is Zero.")
elif ld%3==0:
    print("Last Digit of Number is Divisible by 3")
else:
    print("Last Digit of Number is Not Divisible by 3")
