from tkinter import *

def status(x):
    if x==1:
         Label(y,text="led is off").place(x=140,y=300)
         c.create_oval(10,10,100,100,outline = "black",fill = "white",width = 2)
         c.place(x=10,y=20)
    if x==2:
       Label(y,text="led is on").place(x=140,y=300) 
       c.create_oval(10,10,100,100,outline = "black",fill = "red",width = 2)
       c.place(x=10,y=20)

y=Tk()
y.geometry("300x400")

button1=Button(y,text="led off",command=lambda:status(1)).place(x=140,y=365)
button2=Button(y,text="led on",command=lambda:status(2)).place(x=140,y=330)
c= Canvas(width = 150, height = 250, bg = "grey")
y.mainloop()