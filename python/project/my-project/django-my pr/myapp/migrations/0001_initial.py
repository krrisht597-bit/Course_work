from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = []

    operations = [
        migrations.CreateModel(
            name='Product',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=100)),
                ('slug', models.SlugField(unique=True)),
                ('description', models.TextField()),
                ('price', models.DecimalField(decimal_places=2, max_digits=8)),
                ('image', models.CharField(help_text='Path relative to static/, e.g. img/jacket-1.png', max_length=200)),
                ('category', models.CharField(choices=[('jacket', 'Jacket')], default='jacket', max_length=50)),
                ('color_class', models.CharField(choices=[('home-green', 'Green'), ('home-orange', 'Orange'), ('home-sky-blue', 'Sky Blue'), ('home-purple', 'Purple')], default='home-green', max_length=30)),
                ('featured', models.BooleanField(default=False, help_text='Show on homepage slider')),
                ('created_at', models.DateTimeField(auto_now_add=True)),
            ],
        ),
        migrations.CreateModel(
            name='ContactMessage',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=100)),
                ('email', models.EmailField(max_length=254)),
                ('message', models.TextField()),
                ('created_at', models.DateTimeField(auto_now_add=True)),
            ],
        ),
    ]
