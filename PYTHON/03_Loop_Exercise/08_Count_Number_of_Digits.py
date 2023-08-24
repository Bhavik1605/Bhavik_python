#Count the total number of digits in a number

num = int(input("Enter a Number : "))
count = 0
while num != 0:
    num = num // 10 #floor Division
    count = count + 1
print("Total digits are :", count)
