from django.db import models


class Product(models.Model):
    CATEGORY_CHOICES = [
        ('jacket', 'Jacket'),
    ]
    COLOR_CHOICES = [
        ('home-green', 'Green'),
        ('home-orange', 'Orange'),
        ('home-sky-blue', 'Sky Blue'),
        ('home-purple', 'Purple'),
    ]

    name = models.CharField(max_length=100)
    slug = models.SlugField(unique=True)
    description = models.TextField()
    price = models.DecimalField(max_digits=8, decimal_places=2)
    image = models.CharField(
        max_length=200,
        help_text="Path relative to static/, e.g. img/jacket-1.png"
    )
    category = models.CharField(max_length=50, choices=CATEGORY_CHOICES, default='jacket')
    color_class = models.CharField(max_length=30, choices=COLOR_CHOICES, default='home-green')
    featured = models.BooleanField(default=False, help_text="Show on homepage slider")
    created_at = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return self.name


class ContactMessage(models.Model):
    name = models.CharField(max_length=100)
    email = models.EmailField()
    message = models.TextField()
    created_at = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f"{self.name} ({self.created_at:%Y-%m-%d %H:%M})"
