#include<stdio.h>
main(){
	float p,r,t,si;
	printf("\n enter the principle amount:");
	scanf("%f",&p);
	printf("\n enter the annul rate of interset :");
	scanf("%f",&r);
	printf("\n enter the time period :");
	scanf("%f",&t);	
	si=(p*r*t)/100;
	printf("\n simple interset:%f",si);
}

