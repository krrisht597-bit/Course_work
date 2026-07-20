from django.contrib import admin
from myapp.models import *

# Person
admin.site.register(Person)

# Passport
admin.site.register(Passport)

# Category
admin.site.register(Category)

# Product
class ProductDisplay(admin.ModelAdmin):
    list_display = ['id', 'name', 'price', 'qty', 'category']

admin.site.register(Product, ProductDisplay)

# Book
admin.site.register(Book)

# Author
admin.site.register(Author)