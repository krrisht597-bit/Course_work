#include<stdio.h>
main(){
	char color;
	printf("\nR for RED");
	printf("\nY for YELLOW");
	printf("\nG for GREEN");
	printf("\n\n enter traffic light color");
	scanf("%c",&color);

	switch (color){
		case'R':
			printf("\n red mean stop!!");
			break;
		case'Y':
			printf("\n yellow mean get ready!!");
			break;
		case'G':
			printf("\n green mean go!!");
			break;
		default:
		printf("\n invalid color");
		break;				
	}
	
}

