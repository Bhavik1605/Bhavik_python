# Python program to multiply two matrices

def multiply(m1, m2):
    if len(m1[0]) != len(m2):
        print("Matrix multiplication is not possible.")
        return

    result = []
    for i in range(len(m1)):
        for j in range(len(m2[0])):
            row = []
            for k in range(len(m2)):
                Sum += m1[i][k] * m2[k][j]
                row.append(Sum)
            result.append(row)
    return result       


m1 = [[1, 2, 3], [4, 5, 6]]
m2 = [[7, 8], [9, 10], [11, 12]]


result = multiply(m1, m2)

if result:
    for row in result:
        print(row)
else:
    print("Matrices cannot be added because they have different dimensions.")
