# Ways to remove i’th character from string in Python

s = input("Enter a String : ")

i = int(input("Enter The Index of The Character to Remove : "))

if i < 0 or i >= len(s):
    print("Invalid Index. Please Enter a Valid Index.")
else:
    res = s[:i] + s[i+1:]

print("Original String :", s)
print(f"String After Removing Character At Index{[i]} :",res)

