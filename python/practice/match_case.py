num1 = int(input("Enter first number :"))
num2 = int(input("Enter second number :"))

option = input("Enter the opteration you want: ")
match option:
    case '+': print(num1+num2)
    case '-': print(num1-num2)
    case '*': print(num1*num2)
    case '/': print(num1/num2)
    case _ : print("Invalid operator")
    