# Python program to add two Matrices

def add(m1, m2):
    if len(m1) != len(m2) or len(m1[0]) != len(m2[0]):
        return None

    result = []

    for i in range(len(m1)):
        row = []
        
        for j in range(len(m1[0])):
            
            Sum = m1[i][j] + m2[i][j]
            row.append(Sum)
            
        result.append(row)

    return result


m1 = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

m2 = [
    [9, 8, 7],
    [6, 5, 4],
    [3, 2, 1]
]


result = add(m1, m2)


if result:
    for row in result:
        print(row)
else:
    print("Matrices cannot be added because they have different dimensions.")
