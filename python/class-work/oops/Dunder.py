# class Demo:

#     name = "Python"

#     def __str__(self):
#         return self.name


# d = Demo()
# print(d)



# class calc:
#     def __init__(self, a, b):
#         self.a = a
#         self.b = b

#     def __eq__(self, value):
#         return self.a + self.b == value.a + value.b

# c1 = calc(10, 20)
# c2 = calc(20, 10)
# print(c1 == c2)



# class Sample:

#     def __init__(self, a):
#         self.a = a

#     def __len__(self):
#         return len(self.a)

#     def __setitem__(self, key, value):
#         self.a[key] = value

#     def __getitem__(self, key):
#         return self.a[key]


# s = Sample(["P", "y", "t", "h", "o", "n"])

# print(len(s))

# s[0] = "J"

# print(s[0])
# print(s.a)
  