#include<stdio.h>
main(){
	char name[10],len=0;
	printf("\n enter your name:");
	scanf("%s",name);
	printf("\n name=%s",name);
	while (name[len]!='\0'){
		len++;
	}
	printf("\n len of string=%d",len);
}
