# Write a Python program to count the number of characters (character frequency) in a string.

S = input("Enter a String : ")
    
fre = {}

for i in S:
    if i in fre:
        fre[i] += 1
    else:
        fre[i] = 1
    
print("Character Frequency : ")
for i in fre:
    print(i,":",fre[i])
