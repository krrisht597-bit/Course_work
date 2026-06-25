from django.db import models

# Create your models here.
class student(models.Model):
              
    name  = models.CharField(max_length=50)  
    email = models.CharField(max_length=50)
    age = models.IntegerField()
    phone = models.CharField(max_length=20,null=True)

from django.db import models

# Create your models here.
class product(models.Model):
    name =models.CharField(max_length=50)
    price =models.IntegerField()
    brand = models.CharField(max_length=50, null=True, blank=True)
category = models.CharField(max_length=50, null=True, blank=True)