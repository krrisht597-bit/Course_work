# class A:
#     id = 10

#     def test(self):
#         print("class A test calling")


# class B(A):
#     id = 50

#     def sample(self):
#         print(self.id)


# b = B()
# b.sample()
# b.test()python inheritance.py

# class A:
#     id = 10

#     def test(self):
#         print("class A test calling")


# class B(A):
#     id = 50

#     def sample(self):
#         print("A id =", A.id)
#         print("B id =", self.id)


# b = B()
# b.sample()
# b.test()



# ** Inheritance 
class Pen:
    def __init__(self, price, color, company):
        self.price = price
        self.color = color
        self.company = company

    def display(self):
        print("Price:", self.price)
        print("Color:", self.color)
        print("Company:", self.company)


class Notebook(Pen):
    def __init__(self, price, color, company, pages):
        super().__init__(price, color, company)
        self.pages = pages

    def display(self):
        print("Price:", self.price)
        print("Color:", self.color)
        print("Company:", self.company)
        print("Pages:", self.pages)


p = Pen(10, "blue", "Cello")
n = Notebook(50, "red", "Camlin", 100)

p.display()

print("------")

n.display()