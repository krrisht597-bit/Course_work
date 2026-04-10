#include<stdio.h>
#include<stdio.h>
main(){
	char str[20],str2[2],str3[10];
	printf("\n enter your str:");
	scanf("%s",str);
	printf("\n name=%s",str);//tops
	printf("\n enter sec str:");
	scanf("%s",str3);
	printf("\n sec=%s",str3);//tops
	printf("\n len of %s=%d",str,strlen(str));
	strupr(str);
	printf("\n uppercase tops=%s",str);
	strlwr(str);
	printf("\n lowercase tops=%s",str);
	strcpy(str2,str);
	printf("\n copystr=%s",str2);
	strcat(str,str3);
	printf("\n concat=%s",str);
}
