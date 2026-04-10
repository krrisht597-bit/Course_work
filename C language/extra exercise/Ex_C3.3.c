#include<stdio.h>
main(){
	int num, rem, sum = 0, rev = 0;
	printf("\nEnter the number : ");
	scanf("%d", &num);
	printf("\nOriginal number = %d", num);
	
	int temp = num; 
	
	while(num != 0){
		rem = num % 10;
		sum = sum + rem;
		rev = rev * 10 + rem;
		num = num / 10; 
	}
	printf("\nSum of digits = %d", sum);
	printf("\nReverse number = %d", rev);
}
