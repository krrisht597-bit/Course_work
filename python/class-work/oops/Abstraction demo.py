from abc import ABC, abstractmethod


class Account(ABC):

    def __init__(self):
        self.balance = 0

    def check_balance(self):
        print(f"Current balance is {self.balance}")

    @abstractmethod
    def deposit(self, amount):
        pass

    @abstractmethod
    def withdraw(self, amount):
        pass


class Saving(Account):

    def deposit(self, amount):
        self.balance += amount
        print(f"Deposited {amount} in saving account")

    def withdraw(self, amount):

        if self.balance >= amount:
            self.balance -= amount
            print(f"Withdrawn {amount} from saving account")

        else:
            print("Insufficient balance")


class Loan(Account):

    def deposit(self, amount):
        self.balance += amount
        print(f"Deposited {amount} in loan account")

    def withdraw(self, amount):

        if self.balance >= amount:
            self.balance -= amount
            print(f"Withdrawn {amount} from loan account")

        else:
            print("Insufficient balance")


# Saving Account
s = Saving()

s.deposit(1000)
s.check_balance()

s.withdraw(500)
s.check_balance()

s.withdraw(600)
s.check_balance()


print("-------- Loan Account --------")


# Loan Account
l = Loan()

l.deposit(5000)
l.check_balance()

l.withdraw(2000)
l.check_balance()