#include<stdio.h>
main(){
	int num;
	printf("\ n enter num ");
	scanf("%d ",& num);
	if (num%2==0){
				goto even;
				}else{
				goto odd;
				}
	printf("\n test data");
			even:{
				printf("\n even");
				return;
	}
			odd:{ 
				printf("\n odd");
				return;
}
}

