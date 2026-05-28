# import re

# st = "sun in rises in the east"


# # 1. MATCH

# k1 = re.match("sun", st)

# print("MATCH :", k1)

# if k1:
#     print("MATCH VALUE :", k1.group())


# # 2. SEARCH

# k2 = re.search("in", st)

# print("\nSEARCH :", k2)

# if k2:
#     print("SEARCH VALUE :", k2.group())


# # 3. FINDALL

# k3 = re.findall("is", st)

# print("\nFINDALL :", k3)


# # 4. FINDITER

# k4 = re.finditer(" is ", st)

# print("\nFINDITER :")

# for i in k4:
#     print(i.group())


# # 5. SUB

# k5 = re.sub("sun", "moon", st)

# print("\nSUB :", k5)


# # 6. SPLIT

# k6 = re.split(" ", st)

# print("\nSPLIT :", k6)





# import re

# number = input("Enter a number : ")

# k = re.match(r"^[6-9]\d{9}$", number)

# if k is None:
#     print("Invalid Number")

# else:
#     print("Valid Number")

# import re
# k = re.search("h.l","hlklo pytholn")
# print(k)
# k = re.search("^Hello","java Hello python")
# print(k)
# k = re.search("java$","java Hello python")
# print(k)
# k = re.search("ja*v","jva Hello python")
# print(k)
# k = re.search("ja+v","jaaaava Hello python")
# print(k)
# k = re.search("ja?v","jaava Hello python")
# print(k)
# k = re.findall(r"\bhello\b","hello python 123 @")
# print(k)

# | Symbol | Meaning             |
# | ------ | ------------------- |
# | `.`    | koi bhi 1 character |
# | `^`    | start of string     |
# | `$`    | end of string       |
# | `*`    | 0 ya more           |
# | `+`    | 1 ya more           |
# | `?`    | 0 ya 1              |
# | `\b`   | word boundary       |



#1Check karta hai ki saare characters same hain ya nahi.
# import re
# text = input("Enter characters : ")
# k = re.match(r"^(.)\1*$", text)
# if k is None:
#     print("Invalid")
# else:
#     print("Valid")


#2 Check karta hai ki input me sirf alphabets hain ya nahi.
# import re
# char = input("Enter characters : ")
# k = re.match(r"^[a-zA-Z]+$", char)
# if k is None:
#     print("Invalid Character")
# else:
#     print("Valid Character")


# import re
# email = "tops@gmail.com"
# k = re.match(r"^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,4}$", email)
# if k is None:
#     print("Invalid Email")
# else:
#     print("Valid Email")


# import re
# password = input("Enter a password : ")
# k = re.match(r"^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$", password)

# if k is None:
#     print("Invalid Password")
# else:
#     print("Valid Password")
