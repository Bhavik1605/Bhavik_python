# Remove all duplicates from a given string in Python

def Remove(s):
    
    result = ""
    
    for i in s:
        if i not in result:
            result += i
    
    return result

s = input("Enter a String : ")
res = Remove(s)

print(res)

