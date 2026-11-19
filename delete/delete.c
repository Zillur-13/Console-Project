
// #include <stdio.h>
// #include "student.h"

// void deleteStudent() {

//     int id, i, j;

//     printf("\nEnter Student ID: ");
//     scanf("%d", &id);

//     for (i = 0; i < studentCount; i++) {

//         if (students[i].id == id) {

//             for (j = i; j < studentCount - 1; j++) {
//                 students[j] = students[j + 1];
//             }

//             studentCount--;

//             printf("\nStudent Deleted Successfully!\n");

//             return;
//         }
//     }

//     printf("\nStudent Not Found!\n");
// }



#include <stdio.h>
#include <string.h>
#include "../student.h"

void deleteStudent() {

    int id, i, j;
    char confirm[10];

    printf("\nEnter Student ID: ");
    scanf("%d", &id);

    for (i = 0; i < studentCount; i++) {

        if (students[i].id == id) {

            printf("\nStudent Found!\n");
            printf("Name: %s\n", students[i].name);

            printf("\nAre you sure you want to delete? (yes/no): ");
            scanf("%9s", confirm);

            if (strcmp(confirm, "yes") == 0 ||
                strcmp(confirm, "YES") == 0 ||
                strcmp(confirm, "Yes") == 0) {

                for (j = i; j < studentCount - 1; j++) {
                    students[j] = students[j + 1];
                }

                studentCount--;

                printf("\nStudent Deleted Successfully!\n");

            } else {

                printf("\nDelete Cancelled!\n");
            }

            return;
        }
    }

    printf("\nStudent Not Found!\n");
}
