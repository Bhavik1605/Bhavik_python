# Python Program to Split the array and add the first part to the end


def Split(a, l):
    if l < 0 or l >= len(a):
        return "Invalid split index"

    return a[l:] + a[:l]


a = [1, 2, 3, 4, 5, 6]
l = 3

result = Split(a,l)
print(result)
