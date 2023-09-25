# Find words which are greater than given length k

w = input("Enter a List of Words Separated By Spaces : ").split()

k = int(input("Enter The Minimum Length (k) : "))

result = []

for i in w:
    if len(i) > k:
        result.append(i)


if result:
    print(f"Words Greater Than Length {k} Are :", result)
else:
    print("No Words Found Greater Than Length :", k)
