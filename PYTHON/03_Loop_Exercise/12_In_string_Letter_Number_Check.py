# Write a Python program that accepts a string and calculates the number of digits and letters.

s = input("Input a string : ")
d=l=0
for c in s:
    if c.isdigit():
        d=d+1
    elif c.isalpha():
        l=l+1
    else:
        pass
print("Total Letters in String : ", l)
print("Total Digits in String : ", d)
