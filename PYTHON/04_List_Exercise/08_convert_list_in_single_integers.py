# Write a Python program to convert a list of multiple integers into a single integer.

l = [1, 2, 3, 4, 5]

res = 0

for i in l:
    res = res * 10 + i

print("Converted integer:", res)
