#include<stdio.h>
main(){
	int base,exp,i,power=1;
	printf("\n enter base number:");
	scanf("%d",&base);
	printf("enter exponent:");
	scanf("%d",&exp);
	for(i=1;i<=exp;i++){
		power=power*base;
	}
	printf("%d rasied to the power %d=%d\n",base,exp,power);
}
