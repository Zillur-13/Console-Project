
#include <stdio.h>
#include "student.h"

void viewStudents() {

    int i;

    if (studentCount == 0) {
        printf("\nNo Student Found!\n");
        return;
    }

    printf("\n===== ALL STUDENTS =====\n");

    for (i = 0; i < studentCount; i++) {

        printf("\nID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Department: %s\n", students[i].department);
        printf("GPA: %.2f\n", students[i].gpa);
        printf("Email: %s\n", students[i].email);

        printf("----------------------\n");
    }
}
