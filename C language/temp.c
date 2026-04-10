#include <stdio.h>
 main() {
    float temp;
    printf("Enter the temperature (in °C): ");
    scanf("%f", &temp);
    if (temp < 10) {
        printf("The weather is COLD.\n");
    }
    else if (temp >= 10 && temp < 25) {
        printf("The weather is WARM.\n");
    }
    else if (temp >= 25 && temp < 35) {
        printf("The weather is HOT.\n");
    }
    else {
        printf("The weather is VERY HOT.\n");
    }
}
