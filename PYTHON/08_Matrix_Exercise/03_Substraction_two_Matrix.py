m1 = [[1, 2], [3, 4]]
m2 = [[4, 5], [6, 7]]
 
print("Printing elements of first matrix")
for row in m1:
    for element in row:
        print(element, end=" ")
    print()
 
print("Printing elements of second matrix")
for row in m2:
    for element in row:
        print(element, end=" ")
    print()
 
result = [[0, 0], [0, 0]]
for i in range(len(m1)):
    for j in range(len(m1[0])):
        result[i][j] = m1[i][j] - m2[i][j]
 
print("Subtraction of two matrix")
for row in result:
    for element in row:
        print(element, end=" ")
    print()
