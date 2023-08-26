'''
Write a Python program that iterates the integers from 1 to 50.
For multiples of 3 print "Fizz" instead of the number and for multiples of 5 print "Buzz".
For numbers that are multiples of 3 and 5, print "FizzBuzz".
'''

for i in range(51):
    if i%3==0 and i%5==0:
        print("FizzBuzz")
        continue
    elif i%3==0:
        print("Fizz")
        continue
    elif i%5==0:
        print("Buzz")
        continue

    print(i)
