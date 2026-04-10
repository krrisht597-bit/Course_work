#include<stdio.h>
main(){
	int a,b,c;
	printf("\n enter the value of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if ( a>b && a>c){
		printf("\n a is max");
	}
	else if (b>a && b>c){
		printf("\n b is max");
	}
	else{
		printf("\n c is max");
	}
}
