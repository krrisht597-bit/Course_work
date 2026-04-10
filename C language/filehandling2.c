

#include <stdio.h>

int main() {
    char name[30], email[30];
    int roll, i;
    FILE *fp;

    // Open file for appending
    fp = fopen("studentlist.csv", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write 3 students
    for (i = 1; i <= 3; i++) {
        printf("\nEnter student roll, name, email: ");
        scanf("%d %s %s", &roll, name, email);
        fprintf(fp, "%d,%s,%s\n", roll, name, email);
    }

    fclose(fp);

    // Now open file for reading
    fp = fopen("studentlist.csv", "r");
    if (fp == NULL) {
        printf("Error: unable to open file!\n");
        return 1;
    }

    char line[200];
    printf("\n--- Student List ---\n");

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}

