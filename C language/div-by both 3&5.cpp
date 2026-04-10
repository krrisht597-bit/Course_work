#include<stdio.h>
main(){
	int num;
	printf("\n enter a number:");
	scanf("%d",&num);
	if(num%3==0){
		if(num%5==0){
			printf("\n%d divisible by  both 3 and 5.",num);
			}else{ 
			printf("\n%d is divisible by 3 ", num);
			}
		}
			else if (num%5==0){
			printf("\n %d is divisible by 5 only.",num);
		}
			else{
			printf("\n %d is not divisible by 3 or 5.",num);
			}
}

