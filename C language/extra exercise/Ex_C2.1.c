#include<stdio.h>
main(){
	int marks;
	char grade;
    printf("\n====== GRADE CALCULATOR ====== ");
    printf("\n\nEnter student's marks: ");
    scanf("%d", &marks);
    
    if (marks > 90) {
        grade = 'A';
    }
    else if (marks > 75) {
        grade = 'B';
    }
    else if (marks > 30) {
        grade = 'C';
    }
    else if (marks <30 ){
        grade = 'D';
    }
    else{
    	printf("\nInvalid input");
	}
	printf("\nGrade: %c", grade);
}
