from django.db import migrations


def seed_products(apps, schema_editor):
    Product = apps.get_model('myapp', 'Product')
    products = [
        dict(
            name='Windbreaker', slug='windbreaker', price='120.00',
            image='img/jacket-1.png', color_class='home-green', featured=True,
            description=('Softness you feel from the first moment. These jackets hug '
                          'your body with lightweight warmth, perfect for cold days '
                          'without sacrificing style.'),
        ),
        dict(
            name='Resistance', slug='resistance', price='105.00',
            image='img/jacket-2.png', color_class='home-orange', featured=True,
            description=('Jackets designed to withstand anything. Durable materials, '
                          'reinforced seams, and wind and rain protection to accompany '
                          'you through any challenge.'),
        ),
        dict(
            name='Relaxed Fit', slug='relaxed-fit', price='110.00',
            image='img/jacket-3.png', color_class='home-sky-blue', featured=True,
            description=('Uncompromising comfort with a relaxed fit that gives you freedom '
                          'of movement. Ideal for a casual, modern look that adapts to your '
                          'daily routine.'),
        ),
        dict(
            name='Protective Type', slug='protective-type', price='135.00',
            image='img/jacket-4.png', color_class='home-purple', featured=True,
            description=('More than a jacket, a barrier against the weather. Designed to offer '
                          'maximum protection with thermal and waterproof technology, keeping '
                          'you safe.'),
        ),
    ]
    for p in products:
        Product.objects.create(**p)


def remove_products(apps, schema_editor):
    Product = apps.get_model('myapp', 'Product')
    Product.objects.all().delete()


class Migration(migrations.Migration):

    dependencies = [
        ('myapp', '0001_initial'),
    ]

    operations = [
        migrations.RunPython(seed_products, remove_products),
    ]
