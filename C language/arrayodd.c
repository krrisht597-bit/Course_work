#include<stdio.h>
main(){
int a[10],i,j,odd[10],len=0;
printf("\n enter array element");
for(i=0;i<10;i++){
	printf("\n a[%d]",i);
	scanf("%d",& a[i]);
}
// ================ filte odd array ===============
for(i=0;i<10;i++){
	if(a[i]%2!=0){
		odd[len]=a[i];
		len++;
	}
}
printf("\n filter only odd array \n");
for(i=0;i<len;i++){
	printf("\n odd [%d]=%d",i,odd[i]);
}
}
