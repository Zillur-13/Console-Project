
#include <stdio.h>
#include "student.h"

void updateStudent() {

    int id, i;

    printf("\nEnter Student ID: ");
    scanf("%d", &id);

    for (i = 0; i < studentCount; i++) {

        if (students[i].id == id) {

            printf("\nEnter New Name: ");
            scanf(" %49[^\n]", students[i].name);

            printf("Enter New Department: ");
            scanf(" %29[^\n]", students[i].department);

            printf("Enter New GPA: ");
            scanf("%f", &students[i].gpa);

            printf("Enter New Email: ");
            scanf(" %49s", students[i].email);

            printf("\nStudent Updated Successfully!\n");

            return;
        }
    }

    printf("\nStudent Not Found!\n");
}
