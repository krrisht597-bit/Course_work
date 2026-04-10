#include<stdio.h>
main(){
	int num;
	printf("\nEnter an integer: ");
	scanf("%d", &num);
	
	//For even-odd number
	if(num % 2 == 0){
		printf("\n%d is an even number.", num);
	}else{
		printf("\n%d is an odd number.", num);
	}
	
	//For positive, negative or zero number
	if(num > 0){
		printf("\n%d is a postivie number.", num);
	}
	else if(num < 0){
		printf("\n%d is a negative number.", num);
	}
	else{
		printf("\nThe number is zero.", num);
	}
	
	//For multiple of both 3 and 5
	if (num % 3 == 0) {
    if (num % 5 == 0) {
        printf("\n%d is a multiple of both 3 and 5.", num);
        } 
		else {
            printf("\n%d is multiple of 3 only.", num);
        }
    } 
	else if (num % 5 == 0) {
        printf("\n%d is multiple of 5 only.", num);
    } 
	else {
        printf("\n%d is a not multiple of both 3 and 5.", num);
    }
}
