# Creating a simple class in Python

class Name:
    def __init__(self, name):
        self.name = name

    def show(self):
        return f"Hello! {self.name}"

n1 = input("Enter Your Name : ")
n2 = Name(n1)
print(n2.show())
