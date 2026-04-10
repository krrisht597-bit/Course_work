#include<stdio.h>
main(){
	int n = 4,i,j,k;
	for(i=1;i<=n;i++){
	for(k=i;k<n;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
		if(i==1||j==1||j==i||i==n){
			printf("* ");	
		}
		else{
			printf("  ");
		}
	}
	printf("\n");
	}
}

