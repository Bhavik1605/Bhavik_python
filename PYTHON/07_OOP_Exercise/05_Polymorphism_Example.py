# Using Polymorphism in Python

class Circle:
    def __init__(self, redius):
        self.radius = redius

    def area(self):
        print("Area of circle :", 3.14 * self.radius * self.radius)

class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        print("Area of Rectangle :", self.length * self.width)




r=float(input("Enter Radius of Circle : "))

l=float(input("Enter Length of Rectangle : "))

w=float(input("Enter Width of Rectangle : "))

cir = Circle(r)
rect = Rectangle(l,w)

cir.area()
rect.area()
