#include <stdio.h>

struct student {
    int enroll;
    char name[50];
    char email[50];
};

int main() {
    struct student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.enroll);

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter email: ");
    scanf("%s", s1.email);

    printf("\nEnroll = %d", s1.enroll);
    printf("\nName   = %s", s1.name);
    printf("\nEmail  = %s", s1.email);
}

