#Create a Python class Perant with attributes: name and age of type string.
#Create a display() method that displays the name and age of an object created via the Perant class.
#Create a child class Student  which inherits from the Person class and which also has a section attribute.
#Create a method displayStudent() that displays the name, age and section of an object created via the Student class.
#Create a student object via an instantiation on the Student class and then test the displayStudent method.


class Perant:
    def __init__(self,name,age):
        self.name=name
        self.age=age

    def display(self):
        print("------------Perant_Info----------------")
        print("Perant Name is :", self.name)
        print("Perant Age is :", self.age)

class Student(Perant):
    def __init__(self,name,age,subject):
        Perant.__init__(self,name,age)
        self.subject=subject

    def displayStu(self):
        print("------------Student_Info----------------")
        print("Student Name is :",self.name)
        print("Student Age is :",self.age)
        print("Student subject is :",self.subject)

print('----------Perant_Data-------------')
p_name=input("Enter Perant Name : ")
p_age=int(input("Enter Perant Age : "))

print('----------Student_Data-------------')
s_name=input("Enter Student Name : ")
s_age=int(input("Enter Student Age : "))
s_subject=input("Enter Student Subject : ")

p1=Perant(p_name,p_age)
p1.display()

s1=Student(s_name,s_age,s_subject)
s1.displayStu()
