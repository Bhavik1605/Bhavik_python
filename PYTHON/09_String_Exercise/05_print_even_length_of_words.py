# Python program to print even length words in a string

def even(s):
    word = s.split()
    
    for i in word:
        if len(i) % 2 == 0:
            print(i)

s = "This is a Sample String With Some Words of Different Lengths"

even(s)
