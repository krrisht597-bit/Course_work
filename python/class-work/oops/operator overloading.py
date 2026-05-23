class calc:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def __add__(self, other):
        return calc(self.a + other.a, self.b + other.b)

    def __mul__(self, other):
        return calc(self.a * other.a, self.b * other.b)

    def __str__(self):
        return f"{self.a}, {self.b}"


c = calc(10, 20)
c1 = calc(30, 40)

print(c + c1)
print(c * c1)