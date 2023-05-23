from tkinter import *
from PIL import Image, ImageTk

window = Tk()
window.geometry("510x300")
window.title("Omg mike pspsps")

mike = Image.open("mike.jpg")
mikeResized = mike.resize((300,205), Image.Resampling.LANCZOS)
photo = ImageTk.PhotoImage(mikeResized)

icon = PhotoImage(file='mikuicon.png')
label = Label(window,
              text = "I'm thinking miku miku\noo-ee-oo",
              font = ("Next Art", 30, "bold"),
              fg= "#ff1688",
              bg= "#20737e",
              relief=SUNKEN,
              bd=10,
              image=photo,
              compound="bottom")
label.pack()

window.iconphoto(True, icon)
window.config(bg= "#47c8c0")

window.mainloop()