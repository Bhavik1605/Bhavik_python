# Write a program to demonstrate the Python E-Note Book Console based application

import os
import datetime

def generate():
    print("------------------------")
    print("Welcome to Python E Note")
    print("------------------------")
    name = input("Enter Python E-Note Generator Name : ")
    while not all(i.isalpha() or i.isspace() for i in name):
        print("Error : Invalid Input")
        name = input("Enter Python E-Note Generator Name : ")

    title = input("Enter Python E-Note Title : ")
    content = input("Enter E-Note Content : ")

    time = datetime.datetime.now()
    data = f"------------------------------------------------\n{time}\nE-Note Title:{title}\nE-Note Description:{content}\n\t\tNote Generator: {name}\n------------------------------------------------\n"

    with open("notes.txt", "a") as file:
        file.write(data)
        
    print("--------------------------------")
    print("E-Note generated successfully!")
    print("--------------------------------")
    print("")

def view():
    try:
        with open("notes.txt", "r") as file:
            notes = file.read()
            print(notes)
    except FileNotFoundError:
        print("------------------------")
        print("No notes available.")
        print("------------------------")


while True:
    print("----------------------------")
    print("Welcome to Python E Note")
    print("----------------------------")
    print("Press 1 for generate Note")
    print("Press 2 for view Note")
    print("Press 3 for exit")
    print("----------------------------")
        
    choice = input("Enter your choice: ")

    if choice == '1':
        generate()
    elif choice == '2':
        view()
    elif choice == '3':
        print("-------------------------------\nExiting the program. Goodbye!\n-------------------------------")
        break
    else:
        print("Invalid choice. Please enter a valid option.")
    print("")

