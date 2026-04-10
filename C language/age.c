#include<stdio.h>
main(){
	int age;
	printf("\n enter the age:");
	scanf("%d",& age);
	if(age>=0 && age<=12){
		printf("\n %d is a child.",age);
	}
	else if (age>=13 && age<=19){
		printf("\n %d is a teenager.",age);
	}
	else if (age>=20 && age<=64){
		printf("\n %d is a adult.",age);
	}
	else if (age>=65){
	printf("\n %d is a senior.",age);
}
}

