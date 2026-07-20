from django import forms
from .models import ContactMessage


class ContactForm(forms.ModelForm):
    class Meta:
        model = ContactMessage
        fields = ['name', 'email', 'message']
        widgets = {
            'name': forms.TextInput(attrs={'placeholder': 'Your name', 'class': 'form__input'}),
            'email': forms.EmailInput(attrs={'placeholder': 'Your email', 'class': 'form__input'}),
            'message': forms.Textarea(attrs={
                'placeholder': 'Your message',
                'class': 'form__input form__textarea',
                'rows': 5
            }),
        }
