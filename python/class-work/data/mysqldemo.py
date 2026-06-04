import mysql.connector as sql

con = sql.connect(
    host="localhost",
    port=3306,
    user="root",
    password="root",
    database="dharpakad"
)
cursor = con.cursor()

# cursor.execute("create database dharpakad")

# cursor.execute("create table student(id int primary key, name varchar(20),email varchar(50))")

# q = "insert into student values(1,'sahil','sahil@gmail.com')"
# q = "insert into student values(%s,%s,%s)"
# v = (3,'krish','krish@gmail.com')
# cursor.execute(q,v)
# con.commit()

# q = "update student set name=%s,email=%s where id=%s"
# v = ('krish T','krish@yahoo.com',3)
# cursor.execute(q,v)
# con.commit()

# q = "delete from student where id=%s"
# v = (3,)
# cursor.execute(q,v)
# con.commit()


# q = "select * from student"
# cursor.execute(q)

# data = cursor.fetchmany(2)
# print(data)

# con.close()

