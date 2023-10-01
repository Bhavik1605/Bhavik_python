# Python – Remove empty List from List

l1 = [1, 2, [], 3, [], 4, [], 5]

l2 = []

for i in l1:
    if i:
        l2.append(i)

print(l2)
