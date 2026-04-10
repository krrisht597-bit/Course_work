#include<stdio.h>
main(){
	int num,rem,min;
	
	printf("\n enter a number:");
	scanf("%d",&num);
	min =9;
	while(num!=0){
		rem=num%10;
		if(rem<min){
			min=rem;
		}
		num=num/10;
	}
	printf("\n smallest digit =%d\n",min);
}
