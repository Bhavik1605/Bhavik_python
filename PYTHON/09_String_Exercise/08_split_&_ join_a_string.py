# Python program to split and join a string

def spliting(s):
    list = s.split(' ')
    return list

def joining(list):
    res = '-'.join(list)
    return res

s = input("Enter a String : ")

list = spliting(s)
print("The String After Splitting is: ",list)

print("The String After Joining is: ",joining(list))
