class Student:
    def __init__(self,id,name,email):
       self.id=id
       self.name=name
       self.email=email
    
    def display(self):
        print(self.id,self.name,self.email)
       
s=Student(10,"krrish","krrish@gmail.com")
s.display()

s1=Student(10,"priyanshu","priyanshu@gmail.com")
s1.display()