from django.shortcuts import render,redirect
from django.contrib.auth.models import User
from django.contrib.auth import authenticate,login,logout
from django.contrib.auth.decorators import login_required

# Create your views here.
def index(request):
    if request.method=='POST':
        data = request.POST
        uname = data.get("username")
        password = data.get("password")
        
        user = authenticate(username=uname,password=password)
        if user is not None:
            login(request,user)
            return redirect("home")
        else:
             return render(request,"index.html",{"err":"Invalid credentials"})
            
    if request.user.is_authenticated:
        return redirect("home")
        
    return render(request,"index.html")

def reg(request):
    if request.method=='POST':
        data = request.POST
        fname = data.get("firstname")
        lname = data.get("lastname")
        uname = data.get("username")
        password = data.get("password")
        
        # user = User(first_name=fname,last_name=lname,username=uname)
        # user.set_password(password)
        # user.save()

# create_user() ek shortcut/built-in method hai jo upar wale 3 steps khud hi automatically kar deta hai:
# User object banata hai # Password ko hash karta hai (automatically!) # Database mein save kar deta hai
        User.objects.create_user(first_name=fname,last_name=lname,username=uname,password=password)
        
        # Success message dikhana
        return render(request,"reg.html",{"success":"Registration successfully"})
    
        # Login form dikha do
    return render(request,"reg.html")

# Sirf login users hi dekh sakte
@login_required(login_url="index")
def home(request):
    return render(request,"home.html")

# Session khatam
def user_logout(request):
    logout(request)
    return redirect("index")