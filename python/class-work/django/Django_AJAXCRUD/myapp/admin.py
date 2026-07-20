from django.contrib import admin
from myapp.models import *
# Register your models here.

# admin.site.register(Student)
@admin.register(Student)
class StudentAdmin(admin.ModelAdmin):
    list_display = ('id', 'name', 'email', 'age')