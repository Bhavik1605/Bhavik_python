'''
Write a Program in Python to Find the Smallest and the
Largest List Elements on Inputs Provided by the User
'''

l = []

num = int(input("How Many Elements Enter in List? : "))

for i in range(num):
  data = int(input(f"Enter {i+1} Number : "))
  l.append(data)

print("\nList is :",l) 
print("\nMaximum Element in The List is :", max(l))
print("Minimum Element in The List is :", min(l))
