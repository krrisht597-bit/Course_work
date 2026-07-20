from django.urls import path
from myapp.views import *
from django.conf import settings
from django.conf.urls.static import static

urlpatterns = [
    path("",index,name="index"),
    path("payment",payment,name="payment"),
    path("mail",mail_send,name="mail"),
    path("htmlmail",mail_html,name="htmlmail") ,
    path("attachmail",mail_attach, name="attachmail"),
    path("sms",send_sms,name="sms")



]

urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)