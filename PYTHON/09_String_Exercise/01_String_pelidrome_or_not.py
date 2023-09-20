# Python program to check if a string is palindrome or not

def pelidrome(s):
    return s == s[::-1]
 
 
s = input("Enter Your String : ")


if pelidrome(s):
    print(f"'{s}' is a palindrome.")
else:
    print(f"'{s}' is not a palindrome.")
