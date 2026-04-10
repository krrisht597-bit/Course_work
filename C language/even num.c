#include<stdio.h>
main(){
	int x;
	printf("\n enter the num of value: ");
	scanf("%d",&x);
	if(x%2==0){
		printf("\n %d is even num",x);
	}
	else if (x%2!=0){
		printf("\n %d is odd num",x);
	}
}

