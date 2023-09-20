# Reverse words in a given String in Python

string = input("Enter a String : ")

s = string.split()[::-1]

l = []

for i in s:
    l.append(i)

print(" ".join(l))
