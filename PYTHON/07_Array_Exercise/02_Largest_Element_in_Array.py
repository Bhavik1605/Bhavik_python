# Python Program to find largest element in an array

def larg(arr):
    if len(arr) == 0:
        return "The array is empty"
    
    Max = arr[0]
    
    for i in arr:
        if i > Max:
            Max = i

    return Max

arr = [12, 45, 78, 23, 56, 122]

print("The largest element in the array is :", larg(arr))
