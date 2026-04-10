#include<stdio.h>
main(){
	int num, i, j, isPrime;
	printf("\nEnter a number : ");
	scanf("%d", &num);
	printf("\nPrime numbers between 1 and %d are:\n", num);
	
    for (i = 2; i <= num; i++) {
        isPrime = 1; 

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime == 1)
            printf("%d ", i);
    }
}
