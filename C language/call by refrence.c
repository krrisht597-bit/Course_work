#include<stdio.h>
void swap (int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
main(){
	int a=10,b=20;
	swap(&a , &b);
	printf("\n after swapping a=%d and b=%d",a,b);
}
