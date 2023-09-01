import tkinter as tk
import math

def fac():
    tk.Label(x,text=f"  {math.factorial(int(entry.get()))}  ").grid(row=2,column=2)

x=tk.Tk()

tk.Label(x,text="Enter a number: ").grid(row=1,column=1)
entry=tk.Entry(x)
entry.grid(row=1,column=2)

button=tk.Button(x,text="validate",command=fac).grid(row=3,column=2)

x.mainloop()