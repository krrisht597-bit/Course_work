class Test:

    id = 10
    _name = "Sahil"
    __email = "sahil@gmail.com"
    def display(self):
        print(self.id)

t = Test()
# print(dir(t))
print(t.id)
print(t._name)
print(t._Test__email)