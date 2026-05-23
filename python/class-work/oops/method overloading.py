from multipledispatch import dispatch

class A:

    @dispatch(int, int)
    def add(self, a, b):
        print(f"addition of {a} and {b} is {a+b}")

    @dispatch(int, int, int)
    def add(self, a, b, c):
        print(f"addition of {a}, {b} and {c} is {a+b+c}")

    @dispatch(list)
    def add(self, a):
        total = 0

        for i in a:
            total += i

        print("sum is", total)


obj = A()

obj.add(10, 20)
obj.add(10, 20, 30)
obj.add([1, 2, 3, 4])