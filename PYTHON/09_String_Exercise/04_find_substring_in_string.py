# Python | Check if a Substring is Present in a Given String

string = input("Enter a String : ")
substring = input("Enter a Substring to Search for : ")

if substring in string:
    print(f"'{substring}' is Present in The Given String.")
else:
    print(f"'{substring}' is Not Present in The Given String.")
