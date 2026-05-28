class Salary:

    def __init__(self, pay, bonus):
        self.pay = pay
        self.bonus = bonus

    def annual_salary(self):
        return (self.pay * 12) + self.bonus


class Employee:

    def __init__(self, name, age, salary):
        self.name = name
        self.age = age
        self.salary = salary

    def total_salary(self):
        return self.salary.annual_salary()


# Salary object alag bana
s = Salary(5000, 10000)

# Employee me pass kiya
e = Employee("John", 30, s)

print(e.total_salary())