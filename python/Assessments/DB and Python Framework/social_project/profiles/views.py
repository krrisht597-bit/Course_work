from django.shortcuts import render, redirect
from .models import UserProfile
from .forms import UserProfileForm

def profile_list(request):
    profiles = UserProfile.objects.all()

    return render(
        request,
        'profile_list.html',
        {'profiles': profiles}
    )


def profile_create(request):

    if request.method == "POST":
        form = UserProfileForm(request.POST)

        if form.is_valid():
            form.save()
            return redirect('/')

    else:
        form = UserProfileForm()

    return render(
        request,
        'profile_form.html',
        {'form': form}
    )