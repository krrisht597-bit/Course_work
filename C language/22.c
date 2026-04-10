#include<stdio.h>
main(){
	int i,num;
	printf("\n enter the number :");
	scanf("%d",&num);
	for(i=num-1;i>=1;i--){
		num=num*i;
	}
	printf("\n factorial =%d",num);
}
