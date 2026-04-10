#include<stdio.h>
int a=10;//global variable
void test (int m){ // formal parameter
printf("\n in function a=%d",a);
printf("\n m=%d",m);
}
main(){
	{
int x=10; // local variable
printf("\n x=-%d ",x);
printf("\n in local block a=%d",a);
}
printf("\n in main block a=%d ",a);
test (12);
}
