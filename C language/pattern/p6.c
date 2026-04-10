#include<stdio.h>
main(){
	int i,j;
	for(i=1;i<=9;i++){
	 for(j=1;j<=9;j++){
	 	if (i==5||j==5||(i==1 &&j>=5 && j<=9)||(j==9 && i>=5 && i<=9)||(i==9 && j>=1 && j<=5)||
		 (j==1 && i>1 && i<=5)||(i==3 && j==3)||(i==7 && j==3)||(i==7 && j==7)||(i==3 && j==7)){
	 		printf("* ");
		 }
		 else{
		 	printf("  ");
		 }
	}
	printf("\n");
	}
	
}
