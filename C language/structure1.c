#include<stdio.h>
struct student {
	int enroll;
	char name[20];
	char email[30];
};
main(){
	struct student s1={123,"krish","krish@gamil.com"};
printf("\n enroll=%d",s1.enroll);
printf("\n email=%s",s1.email);
printf("\n name=%s",s1.name);
	 
	 struct student s2={124,"vansh","vansh@gamil.com"};
	 printf("\n enroll=%d",s2.enroll);
	 printf("\n email=%s",s2.email);
	 printf("\n name=%s",s2.name);
}

