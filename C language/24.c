#include<stdio.h>
main(){
	int i,even_sum=0,odd_sum=0;
	for(i=1;i<=10;i++){
		if(i%2==0){
		even_sum=even_sum+i;	
		}else{
		odd_sum=odd_sum+i;		
		}
	}
	printf("\n sum of even digit = %d",even_sum);
	printf("\n sum of odd digit = %d",odd_sum);
}
