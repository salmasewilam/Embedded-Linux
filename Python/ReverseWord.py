import tkinter as tk


def reverse():
    tk.Label(x,text=entry.get()[::-1]).grid(row=2,column=2)

x=tk.Tk()

tk.Label(x,text="Enter a Word: ").grid(row=1,column=1)
entry=tk.Entry(x)
entry.grid(row=1,column=2)

button=tk.Button(x,text="validate",command=reverse).grid(row=3,column=2)

x.mainloop()