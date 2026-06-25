from django.shortcuts import render,redirect
from myapp.models import *

# Create your views here.
def index(request):
    return render(request,"index.html")

def reg(request):
    if request.method == 'POST':
        data = request.POST
        name = data.get("name")
        email = data.get("email")
        age = data.get("age")
        student.objects.create(name=name,email=email,age=age)
        return render(request,"index.html",{"msg":"Registration Successfull!!!!"})
    return render(request,"index.html")

def display(request):
    students = student.objects.all()
    return render(request,"display.html",{"students":students})

def delete_students(request):
    id=request.GET.get('id')
    students = student.objects.get(id=id)
    students.delete()
    return redirect("display")


def update_student(request):
    id=request.GET.get('id')
    students=student.objects.get(id=id)
    if request.method == 'POST':
        data = request.POST
        name = data.get("name")
        email = data.get("email")
        age = data.get("age")
        students.name=name
        students.email=email
        students.age=age
        students.save()
        return render(request,"index.html",{"msg":"update Successfull!!!!"})
    return render(request,"update.html",{"student":students})