# Python Program for array rotation

def Array(a,d):
    temp = []
    n=len(a)
    for i in range(d,n):
        temp.append(a[i])
    i = 0
    for i in range (0,d):
        temp.append(a[i])
    a=temp.copy()
    return a
 
a = [1, 2, 3, 4, 5, 6, 7]
print("Array After Left Rotation is : ", end=' ')
print(Array(a,1))

