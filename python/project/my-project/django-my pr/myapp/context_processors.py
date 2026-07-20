def cart_context(request):
    cart = request.session.get('cart', {})
    count = sum(cart.values())
    return {'cart_count': count}