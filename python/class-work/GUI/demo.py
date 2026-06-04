from  tkinter import *

root = Tk()
root.geometry("500x500")
root.title("My App")

# b1=Button(root,text="left")
# b1.pack(side=LEFT)
# b2=Button(root,text="right")
# b2.pack(side=RIGHT)
# b3=Button(root,text="top")
# b3.pack(side=TOP)
# b4=Button(root,text="bottom")
# b4.pack(side=BOTTOM)
# root.mainloop()


# name=Label(root,text="userName")
# name.grid(row=1,column=1)
# email=Label(root,text="Email")
# email.grid(row=2,column=1)
# Phone=Label(root,text="username")
# Phone.grid(row=3,column=1)

# t1=Entry(root)
# t1.grid(row=1,column=2)
# t2=Entry(root)
# t2.grid(row=2,column=2)
# t3=Entry(root)
# t3.grid(row=3,column=2)

# b1=Button(root,text="Submit")
# b1.grid(row=4,column=2)
# root.mainloop()

name=Label(root,text="userName")
name.place(x=100,y=100) 
email=Label(root,text="Email")
email.place(x=100,y=150)
Phone=Label(root,text="username")
Phone.place(x=100,y=200)

t1=Entry(root)
t1.place(x=200,y=100)
t2=Entry(root)
t2.place(x=200,y=150)
t3=Entry(root)
t3.place(x=200,y=200)

b1=Button(root,text="Submit",width=17)
b1.place(x=200,y=250)
root.mainloop()