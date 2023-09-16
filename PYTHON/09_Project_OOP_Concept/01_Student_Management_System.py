# Student Management System Using OOP Concept

class Student:
    def __init__(self, Id, name, age, grade):
        self.Id = Id
        self.name = name
        self.age = age
        self.grade = grade

class StuManage:
    def __init__(self):
        self.students = []

    def add_student(self, student):
        self.students.append(student)

    def display_students(self):
        if not self.students:
            print("No students in the system.")
        else:
            print("Student Records:")
            for student in self.students:
                print("-----------------------")
                print("ID :",student.Id)
                print("Name:",student.name)
                print("Age:",student.age)
                print("Grade:",student.grade)
                print("-----------------------")

    def search_student(self, Id):
        for student in self.students:
            if student.Id == Id:
                return student
        return None

    def delete_student(self, Id):
        student = self.search_student(Id)
        if student:
            self.students.remove(student)
            print(f"Student with ID {Id} deleted.")
        else:
            print(f"Student with ID {Id} not found.")

    def update_student(self, Id, name, age, grade):
        student = self.search_student(Id)
        if student:
            student.name = name
            student.age = age
            student.grade = grade
            print(f"Student with ID {Id} updated.")
        else:
            print(f"Student with ID {Id} not found.")

s1 = StuManage()

while True:
    print("\nStudent Management System Menu:")
    print("1. Add Student")
    print("2. Display Students")
    print("3. Search Student")
    print("4. Delete Student")
    print("5. Update Student")
    print("6. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        Id = input("Enter student ID: ")
        name = input("Enter student name: ")
        age = input("Enter student age: ")
        grade = input("Enter student grade: ")
        stu = Student(Id, name, age, grade)
        s1.add_student(stu)
        print("Student added successfully.")

    elif choice == "2":
        s1.display_students()

    elif choice == "3":
        Id = input("Enter student ID to search: ")
        student = s1.search_student(Id)
        if student:
            print("Student found:")
            print(f"ID: {student.Id}, Name: {student.name}, Age: {student.age}, Grade: {student.grade}")
        else:
            print("Student not found.")

    elif choice == "4":
        Id = input("Enter student ID to delete: ")
        s1.delete_student(Id)

    elif choice == "5":
        Id = input("Enter student ID to update: ")
        name = input("Enter updated student name: ")
        age = input("Enter updated student age: ")
        grade = input("Enter updated student grade: ")
        s1.update_student(Id, name, age, grade)

    elif choice == "6":
        print("Exiting the program.")
        break

    else:
        print("Invalid choice. Please enter a valid option.")
