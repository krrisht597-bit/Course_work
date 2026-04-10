
#include<stdio.h>
main(){
	int a=10;
	int*ptr=&a;
	printf("\n adress=%p value=%d",ptr,*ptr);
	*ptr=20;
	printf("\n a=%d",a);
}

