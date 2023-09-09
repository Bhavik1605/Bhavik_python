# Write a program to sum all the values of a dictionary.

dict1 = {'key 1': 200, 'key 2': 300, 'key 3': 400}
x = []
for i in dict1.values():
    x.append(i)

print("Total Sum is :",sum(x))
