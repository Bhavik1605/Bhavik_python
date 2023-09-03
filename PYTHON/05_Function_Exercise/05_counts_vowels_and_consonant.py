# Define a function which counts vowels and consonant in a word.

def count(x):
    vov = 0
    con = 0
    for i in range(len(x)):
        if x[i] in ['a','e','i','o','u']:
            vov = vov+1
        else:
            con = con + 1

    print("Count of Vowels is :",vov)
    print("Count of Consonant is :",con)

x = input("Enter a Word : ")
count(x)
