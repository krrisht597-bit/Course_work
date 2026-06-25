from django.urls import path
from myapp.views import *


urlpatterns = [
    path("",index,name="index"),
    path("about",about,name="about"),
     path("cart",cart,name="cart"),
    path("checkout",checkout,name="checkout"),
     path("contact",contact,name="contact"),
     path("gallery",gallery,name="gallery"),
    path("myaccount",myaccount,name="myaccount"),
    path("details",details,name="details"),
     path("shop",shop,name="shop"),
    path("wishlist",wishlist,name="wishlist"),

    
]