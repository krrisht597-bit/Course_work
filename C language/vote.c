#include<stdio.h>
main(){
	int x;
	printf("\n enter an age :");
	scanf("%d",&x);
	if(x>=18){
		printf("\n %d for eligible for vote",x);
	}
	else if (x<18){
		printf("\n %d not eligible for vote ",x);
	}
}
