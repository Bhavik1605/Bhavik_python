'''
Accept any city from the user and display monument of that city.

        City                    Monument
        Delhi                   Red Fort
        Agra                    Taj Mahal
        Jaipur                  Jal Mahal
'''

print("Select city : Delhi,Agra,Jaipur\n")

city = input("Enter name of the city : ")

if city.lower()=="delhi":
    print("Monument name is : Red Fort")

elif city.lower()=="agra":
    print("Monument name is : Taj Mahal")

elif city.lower()=="jaipur":
    print("Monument name is : Jal Mahal")

else:
    print("Enter correct name of city")
