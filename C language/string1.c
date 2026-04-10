#include<stdio.h>
main(){
	char str [5]={'t','o','p','s','\0'},name[10],str2[20];
	printf("\n str=%s",str);
	printf("\n enter your name:");
	scanf("%s",name);
	printf("\n name=%s",name);
	printf("\n enter multi words string");
	gets(str2);
	puts(str2);
}
 
