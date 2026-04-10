#include<stdio.h>
main(){
	int num,i;
	printf("\n enter a number:");
	scanf("%d",&num);
	printf("multiplication table of %d:\n",num);
	for(i=1;i<=10;i++){
		printf("%dx%d=%d\n",num,i,num*i);
	}
}
