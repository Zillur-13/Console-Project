
#include <stdio.h>
#include "student.h"

void addStudent() {
    if (studentCount >= MAX) {
        printf("Cannot add more students. Maximum limit reached.\n");
        return;
    }

    printf("Enter Student ID: ");
    scanf("%d", &students[studentCount].id);

    printf("Enter Student Name: ");
    scanf(" %[^\n]%*c", students[studentCount].name);

    printf("Enter Student Department: ");
    scanf(" %[^\n]%*c", students[studentCount].department);

    printf("Enter Student GPA: ");
    scanf("%f", &students[studentCount].gpa);

    printf("Enter Student Email: ");
    scanf(" %[^\n]%*c", students[studentCount].email);

    studentCount++;
    printf("Student added successfully!\n");
}