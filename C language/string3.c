#include<stdio.h>
main(){
	char name[10],newstr[10],j,len=0;
	printf("\n enter your name:");
	scanf("%s",name);
	printf("\n name=%s",name);
	while (name[len]!='\0'){
		len++;
	}
	printf("\n len of string=%d",len);
	len--;
	while(len >=0){
		newstr[j]=name[len];
		printf("\n name[%d]=%c \t newstr[%d]=%c",len,name[len],j,newstr[j]);
		len--;
		j++;
	}
	newstr[j]='\0';
	printf("\n reversestr=%s",newstr);
}
