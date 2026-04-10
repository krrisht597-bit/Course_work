#include<stdio.h>
main(){
	int i,j,k;
	for(i=1;i<=10;i++){
		if (i==5){
			continue;
		}
		printf("\n i=%d",i);
		}
	for(i=1;i<=10;i++){
		if(i%2==0){
			continue;
		}
		for(k=9;k>=i;k--){
		}
		for(j=1;j<=i;j++){
		}
		printf("\n");
	}
	for(i=1;i<=5;i++){
		for(k=10;k>=i*2-1;k--){
		}
		for(j=1;j<=i*2-1;j++){
		}
	}
	}
