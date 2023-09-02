def reverse(s):

    rev = ""
    i = len(s)
    while i > 0:
        rev += s[ i - 1 ]
        i = i - 1
    return rev

s=input("Enter a String : ")


print("Reverse String :",reverse(s))
