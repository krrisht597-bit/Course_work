from django.shortcuts import render, redirect
from myapp.models import *
import os


# Add Product Page
def index(request):
    categories = Category.objects.all()
    return render(request, "index.html", {
        "categories": categories
    })


# Create & Update
def create(request):
    if request.method == "POST":

        id = request.POST.get("id")
        name = request.POST.get("name")
        price = request.POST.get("price")
        qty = request.POST.get("qty")
        cat = request.POST.get("cat")
        image = request.FILES.get("image")

        category = Category.objects.get(id=cat)

        # ---------- UPDATE ----------
        if id:
            product = Product.objects.get(id=id)

            product.name = name
            product.price = price
            product.qty = qty
            product.category = category

            if image:
                if product.image and os.path.exists(product.image.path):
                    os.remove(product.image.path)

                product.image = image

            product.save()

            return redirect("display")

        # ---------- CREATE ----------
        else:
            Product.objects.create(
                name=name,
                price=price,
                qty=qty,
                category=category,
                image=image
            )

            return redirect("display")

    return redirect("display")


# Display Page
def display(request):

    products = Product.objects.all()
    categories = Category.objects.all()

    return render(request, "display.html", {
        "products": products,
        "categories": categories
    })


# Delete Product
def destroy(request):

    id = request.GET.get("id")

    product = Product.objects.get(id=id)

    if product.image and os.path.exists(product.image.path):
        os.remove(product.image.path)

    product.delete()

    return redirect("display")


# Retrieve Product For Update
def retrive(request):
    id = request.GET.get("id")

    product = Product.objects.get(id=id)
    products = Product.objects.all()
    categories = Category.objects.all()

    return render(request, "index.html", {
    "pro": product,
    "categories": categories
})