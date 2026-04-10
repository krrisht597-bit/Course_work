#include <stdio.h>

main() {
    int num1, num2;
    float num;
    char op;

    printf("**********************************");
    printf("\n* ==========CALCULATOR========== *");
    printf("\n**********************************");
    printf("\n*                                *");
    printf("\n Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\n Enter an operator : ");
    scanf(" %c", &op); 

    printf("\n**********************************");

    switch (op) {
        case '+':
            printf("\n* Addition: %d + %d = %d	*", num1, num2, num1 + num2);
            break;

        case '-':
            printf("\n* Subtraction: %d - %d = %d	*", num1, num2, num1 - num2);
            break;

        case '*':
            printf("\n* Multiplication: %d * %d = %d	*", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0) {
                num = num1 / num2;  
                printf("\n* Division: %d / %d = %f	 *", num1, num2, num);
            } else {
                printf("\n* Error: Cannot divide by 0.	*");
            }
            break;

        case '%':
            if (num2 != 0) {
                printf("\n* Modulus: %d %% %d = %d	*", num1, num2, num1 % num2);
            } else {
                printf("\n* Error: Modulus by 0.	*");
            }
            break;	

        default:
            printf("\n* Error: Invalid operator!       *");
            printf("\n* Please use +, -, *, /, or %%    *");
            break;
    }

    printf("\n*                                *");
    printf("\n**********************************\n");
}

