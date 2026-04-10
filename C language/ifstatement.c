#include <stdio.h>
main(){
	int num;
	printf("enter the number:");
	scanf("%d" ,& num);
	if (num>0){
		printf("\n cube of %d=%d",num,num*num*num);
		printf("\n square of %d=%d",num,num*num);
	}
}

