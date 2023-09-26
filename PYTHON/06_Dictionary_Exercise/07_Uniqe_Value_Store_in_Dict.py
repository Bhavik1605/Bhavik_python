# Python Program to Extract Unique dictionary values

d1 = {'a': 1, 'b': 2, 'c': 3, 'd': 2, 'e': 5, 'f': 6, 'g': 3}
d2 = set()
for i in d1.values():
  d2.add(i)
print(d2)
