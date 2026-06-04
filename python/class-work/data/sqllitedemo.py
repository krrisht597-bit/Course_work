import sqlite3

con =sqlite3.connect("data.db")

# q="create table student(id int primary key,name varchar(20),email varchar(50))"

# q="insert into student values(2,'John Doe','john.doe@example.com')"

q = "update student set name='Jooo Doe' , email='john.doe@yahoo.com' where id=2"

# q="delete from student where id=2"

# con.execute(q)
# con.commit()

q = "select * from student"
data = con.execute(q).fetchall()
for i in data:
    print(i)
con.close()