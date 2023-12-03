import tkinter as tk
from tkinter import messagebox
import mysql.connector

root = tk.Tk()
root.title("Hotel Management System")

db = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="",
    database="Python_ass"
)

cursor = db.cursor()

def execute_query(query, data=None):
    try:
        cursor.execute(query, data)
        db.commit()
        return True
    except mysql.connector.Error as err:
        db.rollback()
        messagebox.showerror("Error", f"Error: {err}")
        return False

def check_in():
    guest_name = entry_name.get()
    room_number = entry_room.get()
    checkin_date = entry_checkin.get()

    if not guest_name or not room_number or not checkin_date:
        messagebox.showwarning("Validation Error", "All fields must be filled")
        return

    query = "INSERT INTO guests (name, room, checkin_date) VALUES (%s, %s, %s)"
    data = (guest_name, room_number, checkin_date)

    if execute_query(query, data):
        messagebox.showinfo("Success", "Check-in successful")

def show_guest_list():
    query = "SELECT * FROM guests"
    cursor.execute(query)
    result = cursor.fetchall()

    guest_list = "Guest List:\n"
    for guest in result:
        guest_list += f"{guest[0]} - Name: {guest[1]} - Room No: {guest[2]}\n"

    messagebox.showinfo("Guest List", guest_list)

def check_out():
    guest_id = entry_guest_id.get()

    if not guest_id:
        messagebox.showwarning("Validation Error", "Please enter Guest ID")
        return

    query = "DELETE FROM guests WHERE id = %s"
    data = (guest_id,)

    if execute_query(query, data):
        messagebox.showinfo("Success", "Check-out successful")

def get_guest_info():
    guest_id = entry_guest_id.get()

    if not guest_id:
        messagebox.showwarning("Validation Error", "Please enter Guest ID")
        return

    query = "SELECT * FROM guests WHERE id = %s"
    data = (guest_id,)
    cursor.execute(query, data)
    result = cursor.fetchone()

    if result:
        guest_info = f"Guest ID: {result[0]}\nName: {result[1]}\nRoom: {result[2]}\nCheck-in Date: {result[3]}"
        messagebox.showinfo("Guest Information", guest_info)
    else:
        messagebox.showinfo("Guest Information", "Guest not found")

frame_checkin = tk.Frame(root)
frame_checkin.pack(pady=10)

label_name = tk.Label(frame_checkin, text="Guest Name:")
label_name.grid(row=0, column=0, padx=10)
entry_name = tk.Entry(frame_checkin)
entry_name.grid(row=0, column=1, padx=10)

label_room = tk.Label(frame_checkin, text="Room Number:")
label_room.grid(row=1, column=0, padx=10)
entry_room = tk.Entry(frame_checkin)
entry_room.grid(row=1, column=1, padx=10)

label_checkin = tk.Label(frame_checkin, text="Check-in Date:")
label_checkin.grid(row=2, column=0, padx=10)
entry_checkin = tk.Entry(frame_checkin)
entry_checkin.grid(row=2, column=1, padx=10)

btn_checkin = tk.Button(frame_checkin, text="Check-in", command=check_in)
btn_checkin.grid(row=3, column=0, columnspan=2, pady=10)

frame_guest_list = tk.Frame(root)
frame_guest_list.pack(pady=10)

btn_show_list = tk.Button(frame_guest_list, text="Show Guest List", command=show_guest_list)
btn_show_list.pack()

frame_checkout = tk.Frame(root)
frame_checkout.pack(pady=10)

label_guest_id = tk.Label(frame_checkout, text="Guest ID:")
label_guest_id.grid(row=0, column=0, padx=10)
entry_guest_id = tk.Entry(frame_checkout)
entry_guest_id.grid(row=0, column=1, padx=10)

btn_checkout = tk.Button(frame_checkout, text="Check-out", command=check_out)
btn_checkout.grid(row=1, column=0, columnspan=2, pady=10)

frame_guest_info = tk.Frame(root)
frame_guest_info.pack(pady=10)

btn_get_info = tk.Button(frame_guest_info, text="Get Guest Info", command=get_guest_info)
btn_get_info.pack()

btn_exit = tk.Button(root, text="Exit", command=root.destroy)
btn_exit.pack(pady=10)

root.mainloop()
