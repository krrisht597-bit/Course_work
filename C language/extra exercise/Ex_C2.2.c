#include <stdio.h>
int main() {
    int a, b, c;
	int large, small;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find largest
    if (a > b && a > c)
        large = a;
    else if (b > a && b > c)
        large = b;
    else
        large = c;

    // Find smallest 
    if (a < b && a < c)
        small = a;
    else if (b < a && b < c)
        small = b;
    else
        small = c;

    printf("\nLargest number = %d", large);
    printf("\nSmallest number = %d", small);
}

