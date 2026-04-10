#include<stdio.h>
main(){
	int a[5],i;
	for (i=0;i<5;i++){
		printf("\n enter a[%d]",i);
		scanf("%d ",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("\n enter a[%d]=%d",i,a[i]);
	}
}

