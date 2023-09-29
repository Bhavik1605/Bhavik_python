# Python program to find second largest number in a list

def Larg(lst):
    lst.remove(max(lst))     
    print("The second largest element of the list is: ", max(lst))


l = []

for i in range(int(input("Enter the number of elements to enter in the list : "))):
    x = int(input(f"Enter {i+1} element : "))
    l.append(x)

print("List is : ",l)
Larg(l)
