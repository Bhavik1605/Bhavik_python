# Python program to print positive numbers in a list
  
li=[]
n=int(input("Enter Size of List : "))
for i in range(0,n):
    e=int(input(f"Enter {i+1} Element of List : "))
    li.append(e)

print("Your List is :",li)

res=[]
for i in li:   
    if i >= 0:
        res.append(i)

print("Positive Numbers in Your List are :",res)
