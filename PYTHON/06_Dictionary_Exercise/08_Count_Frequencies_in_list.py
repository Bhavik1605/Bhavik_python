# Counting the frequencies in a list using dictionary in Python

def Count(li):
    D = {}
    for i in li:
        if (i in D):
            D[i] += 1
        else:
            D[i] = 1
    print("All Frequencies in a List :",D)
     
li =[1, 1, 3, 2, 6, 5, 3, 1, 3, 3, 1, 4, 6, 4, 4, 2, 2, 2, 2]

Count(li)
