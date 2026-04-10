#include<stdio.h>
main(){
int a[10],i,sum=0;
for (i=0;i<10;i++){
	printf("\n enter a[%d]",i);
	scanf("%d",&a[i]);
	sum=sum+a[i];
}
for(i=0;i<10;i++){

printf("\n a[%d]=%d",i,a[i]);
	if(i%2==0){
		sum+=a[i];
	}
	
}
printf("\n sum of all array element is even num=%d",sum);
}

