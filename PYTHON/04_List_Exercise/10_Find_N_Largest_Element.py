# Python program to find N largest elements from a list

def Max(l,n):
    res = []
  
    for i in range(0, n): 
        maximum = 0
          
        for j in range(len(l)):     
            if l[j] > maximum:
                maximum = l[j]
                  
        l.remove(maximum)
        res.append(maximum)
          
    return res
  

l = [2, 6, 41, 85, 0, 3, 7, 6, 10]
n = 3

print(n, "Max Elements in ",l)

print(Max(l,n))
