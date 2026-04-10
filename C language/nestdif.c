#include<stdio.h>
main(){
	int a,b,c;
	printf("\n enter the value of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("\n a is max");
		}
		else{
			printf("c is a max");
		}
	}
	else if (b>a){
		if(b>c){
			printf("\n b is max");
		}
		else{
			printf("\n c is max");
}
}
}
