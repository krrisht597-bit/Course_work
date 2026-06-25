from django.urls import path
from .views import *

urlpatterns = [
    path('', profile_list, name='profile_list'),
    path('add/', profile_create, name='profile_create'),
]