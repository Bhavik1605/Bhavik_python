# Write a Python program to count the number of even and odd numbers in a series of numbers

l = [1, 2, 3, 4, 5, 6, 7, 8, 9,10]
odd = 0
even = 0
for x in l:
        if x % 2 == 0:
    	     even+=1
        else:
    	     odd+=1
print("Number of even numbers :",even)
print("Number of odd numbers :",odd)
