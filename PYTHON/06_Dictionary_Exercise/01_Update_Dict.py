# Write a Python program to add a key to a dictionary.

d = {'0':'10', '1':'20'}

print(d)

key = input("Enter a Key: ")
value = input("Enter a Value: ")

d.update({key: value})

print("Updated dictionary :", d)
