# Write a program to check whether a given key exists in a dictionary or not

d = {'0':1, '1':2, '2':3}
x = input("Enter Value to Check : ")

if x in d.keys():
    print("Key Exists in Dictionary")
else:
    print("Key Not Exists in Dictionary")
