
#include <stdio.h>
main() {
    int num1, num2;
    float num;

    printf("\nEnter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nSum: %d", num1 + num2);
    printf("\nDifference: %d", num1 - num2);
    printf("\nProduct: %d", num1 * num2);
    num = (float)num1 / num2;
    printf("\nDivision: %f", num);

    printf("\nModulus: %d", num1 % num2);

    
}

