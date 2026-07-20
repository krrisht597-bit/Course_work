from django.shortcuts import render
import razorpay
from django.http import HttpResponse,JsonResponse
from django.core.mail import send_mail
from django.conf import settings
from django.template.loader import render_to_string
from django.core.mail import EmailMultiAlternatives
from django.core.mail import EmailMessage
import requests


# Create your views here.
def index(request):
    return render(request,"index.html")

def payment(request):
    
    amt = int(request.GET['amt'])
    client = razorpay.Client(auth=("rzp_test_TDGkCn2xBLDD68", "pP6Dk6Wmib5k2Eh9OP6BkNIo"))

    data = { "amount": amt*100, "currency": "INR", "receipt": "order_rcptid_11" }
    payment = client.order.create(data=data) # Amount is in currency subunits.
    print(payment)
    return JsonResponse(payment)


def mail_send(request):
    data  =request.GET
    to = data.get('to')
    sub = data.get('subject')
    msg = data.get('message')
    send_mail(
        subject=sub,
        message=msg,
        from_email=settings.DEFAULT_FROM_EMAIL,
        recipient_list=[to],
        html_message="<h1>Hello</h1>",
        fail_silently=False,
        
    )
    return render(request,"index.html",{"msg":"Mail sent successfully !"})


def mail_html(request):
    html_message = render_to_string(
        "demo.html",
    )

    email = EmailMultiAlternatives(
        subject="Welcome",
        body="Your email client does not support HTML.",
        from_email=settings.DEFAULT_FROM_EMAIL,
        to=["krrisht597@gmail.com"]
    )

    email.attach_alternative(html_message, "text/html")
    email.send()
    return HttpResponse("sent")


def mail_attach(request):
    email = EmailMessage(
        subject="Employee Report",
        body="Please find the attached report.",
        from_email=settings.DEFAULT_FROM_EMAIL,
        to=["krrisht597 @gmail.com"],
    )

    # Attach a file from your project
    email.attach_file("media/logo-tops.png")

    email.send()

    return HttpResponse("sent")


def send_sms(request):

    url = "https://www.fast2sms.com/dev/bulkV2?route=q&message=hello&numbers=9173828868"

    headers = {
        "accept": "application/json",
        "Authorization": ""
    }

    response = requests.get(url, headers=headers)

    print(response.text)
    return HttpResponse("sent")
