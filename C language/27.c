#include<stdio.h>
main(){
	int num,first,last;
	printf(" enter a number:");
	scanf("%d",&num);
	last=num%10;
	while(num>=10){
		num=num/10;
	}	
	first=num;
	printf("\n first digit=%d",first);
	printf("\n last digit=%d\n",last);
	printf("\n sum of first and last digit=%d",first+last);
}
