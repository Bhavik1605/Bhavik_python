# Write a Python program to count the number of strings where the first and last characters are the same.

l=['abc', 'xyz', 'aba', '1221','navin']
count=0

for i in l:
    if i[0]==i[-1]:
        count+=1

print("Total Number is : ",count)
