
#include <stdio.h>
#include "student.h"

void searchStudent() {

    int id, i;

    printf("\nEnter Student ID: ");
    scanf("%d", &id);

    for (i = 0; i < studentCount; i++) {

        if (students[i].id == id) {

            printf("\n===== STUDENT FOUND =====\n");

            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("GPA: %.2f\n", students[i].gpa);
            printf("Email: %s\n", students[i].email);

            return;
        }
    }

    printf("\nStudent Not Found  please valid Id or Name ! \n");
}
