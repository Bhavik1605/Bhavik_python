# Remove empty strings from the list of strings.

List = ["", "Tops","Technology", "", "is", "best", ""]
 
print("Original list is : " + str(List))

for i in List:
    if i=="":
        List.remove("")
 
print("Modified list is : " + str(List))
