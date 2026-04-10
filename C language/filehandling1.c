
#include <stdio.h>
main() {
    FILE *fb;
    char data[30];
    fb = fopen("hello.txt", "w");   // write file
    if (fb == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }
    fprintf(fb, "%s", "hello world");
    fclose(fb);
    fb = fopen("hello.txt", "r");   // read file
    if (fb == NULL) {
        printf("Error opening file for reading\n");
    }

    fgets(data, 30, fb);
    printf("\nReading data from file = %s", data);
    fclose(fb);
}

