# Write a Python program to find common items in two lists.

l1 = [1, 2, 3, 4, 5]
l2 = [3, 4, 5, 6, 7]

l3 = []

for i in l1:
    if i in l2:
        l3.append(i)

print("Common items is :", l3)
