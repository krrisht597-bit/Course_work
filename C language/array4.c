#include<stdio.h>
main(){
	int a[5]={12,36,57,74,90},i,j,temp;
	for(i=10;i<5;i++){
		printf("\n enter a[%d]",i);
		scanf("%d",&a[i]);
}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n array in ascending order:\n");
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	}
}

