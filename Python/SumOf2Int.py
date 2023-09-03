from tkinter import *
import math
def op():
    M=int(entry1.get())
    N=int(entry2.get())
    if y.get()==1:
        Label(x,text=f"The sum is {N+M} ").grid(row=3,column=2)
    if y.get()==2:
        Label(x,text=f"The sub is {M-N} ").grid(row=3,column=2)


x=Tk()
Label(x,text="Enter the value of M ").grid(row=1,column=1)
Label(x,text="Enter the value of N ").grid(row=2,column=1)

entry1=Entry(x)
entry1.grid(row=1,column=2)
entry2=Entry(x)
entry2.grid(row=2,column=2)

y=IntVar()
Radiobutton(x,text="sum",variable=y,value=1).grid(row=5,column=1)
Radiobutton(x,text="sub",variable=y,value=2).grid(row=6,column=1)
button=Button(x,text="validate",command=op).grid(row=4,column=2)

x.mainloop()