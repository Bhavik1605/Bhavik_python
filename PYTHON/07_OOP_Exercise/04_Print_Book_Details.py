'''
1. Define a Book class with the following attributes: Title, Author (Full name), Price.
2. Define a constructor used to initialize the attributes of the method with values entered by the user.
3. Set the View() method to display information for the current book.
4. Write a program to testing the Book class.
'''

class Book:
    def __init__(self , Title , Author , Price):
          self.Title    =  Title
          self.Author   =  Author
          self.Price    =  Price
        
    def view(self):
        return ("Book Title: " , self.Title ,  "Book Author: " , self.Author, "Book Price: " , self.Price)
          

t=input("Enter Book Title : ")
a=input("Enter Book Author : ")
p=input("Enter Book Price : ")

B1 = Book(t , a , p)
print("----------Details-----------")
print( B1.view())
