import tkinter as tk

def buttonp(y):
    if y ==1:
        print("salma")
    if y==2:
        print("sara")
    if y==3:
        print("suzy")
    if y==4:
        print("sama")



x=tk.Tk()

button1 = tk.Button(x,text="Button1",command=lambda:buttonp(1))
button2 = tk.Button(x,text="Button2",command=lambda:buttonp(2))
button3 = tk.Button(x,text="Button3",command=lambda:buttonp(3))
button4 = tk.Button(x,text="Button4",command=lambda:buttonp(4))

button1.grid(row=1,column=2)
button2.grid(row=2,column=1)
button3.grid(row=2,column=3)
button4.grid(row=3,column=2)

x.mainloop()

