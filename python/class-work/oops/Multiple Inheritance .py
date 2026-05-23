class A:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        print("A cons calling")

    def display(self):
        print("A display calling")
        print("x =", self.x)
        print("y =", self.y)


class B:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        print("B cons calling")

    def show(self):
        print("B show calling")


class C(A, B):
    def __init__(self, x, y):
        A.__init__(self, x, y)
        B.__init__(self, x, y)


c = C(10, 20)

c.display()
c.show()