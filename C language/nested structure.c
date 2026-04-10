
#include <stdio.h>
main() {
struct subject {
    char sname[30];
    int marks;
};

struct student {
    char roll[20];
    char sname[30];
    struct subject sub1;
    struct subject sub2;
};

    struct student s1;

    printf("\nEnter roll and name: ");
    scanf("%s %s", s1.roll, s1.sname);

    printf("\nEnter subject1 name and marks: ");
    scanf("%s %d", s1.sub1.sname, &s1.sub1.marks);

    printf("\nEnter subject2 name and marks: ");
    scanf("%s %d", s1.sub2.sname, &s1.sub2.marks);

    printf("\nName = %s \t Roll No = %s", s1.sname, s1.roll);
    printf("\nSubject\tMarks");
    printf("\n%s\t%d", s1.sub1.sname, s1.sub1.marks);
    printf("\n%s\t%d\n", s1.sub2.sname, s1.sub2.marks);
}



