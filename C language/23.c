#include<stdio.h>
main(){
	int num,rem, sum=0;
	printf("\n enter num:");
	scanf("%d",&num);
	while(num !=0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("\n sum of digit=%d",sum);
}
