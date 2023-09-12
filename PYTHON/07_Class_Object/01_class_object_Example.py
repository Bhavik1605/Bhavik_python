'''
Write a Rectangle class in Python language, allowing you to build a rectangle with length and width attributes.
Create a Perimeter() method to calculate the perimeter of the rectangle and a
Area() method to calculate the area of ​​the rectangle.
Create a method display() that display the length, width, perimeter and
area of an object created using an instantiation on rectangle class.
'''


class Rectangle:
    def __init__(self,length,width):
        self.length=length
        self.width=width
    def perimeter(self):
        return 2*(self.length + self.width)
    def area(self):
        return self.length*self.width

    def display(self):
        print("The Length of Rectangle is : ", self.length)
        print("The Width of Rectangle is : ", self.width)
        print("The Perimeter of Rectangle is : ", self.perimeter())
        print("The Area of Rectangle is : ", self.area())

l=float(input("Enter Length of Rectangle : "))
w=float(input("Enter Width of Rectangle : "))

print("--------------------------------------")

r1=Rectangle(l,w)
r1.display()



