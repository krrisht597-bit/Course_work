#include <stdio.h>

struct student {
    int enroll;
    char name[50];
    char email[50];
};

int main() {
    struct student s[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("\nEnter enroll, name, email: ");
        scanf("%d %s %s", &s[i].enroll, s[i].name, s[i].email);
    }

    printf("\nEnroll\tName\tEmail\n");

    for(i = 0; i < 3; i++) {
        printf("%d\t%s\t%s\n", s[i].enroll, s[i].name, s[i].email);
    }
}

