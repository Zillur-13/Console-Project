
#include <stdio.h>
#include "student.h"

struct Student students[MAX] = {
    {101, "Zillur Rahman", "CSE", 3.75, "razillur2002@gmail.com"},
    {102, "Kabir Rahman", "Physics", 3.99, "kabir@gamil.com"},
    {103, "Alif Ahmed", "CSE", 3.60, "alif@gmail.com"},
    {104, "Rifat Hossain", "EEE", 3.77, "rifat@gmail.com"},
    {105, "Nirob Hossain", "CSE", 3.80, "nirob@gmail.com"},
};

int studentCount = 5;

int main () {
    int choice;
    while(1){
        printf(" *** Student Management System [CRUD] \n");
        printf(" 1. Add Student \n");
        printf(" 2. View All Students \n");
        printf(" 3. Search Student \n");
        printf(" 4. Update Student \n");
        printf(" 5. Delete Student \n");
        printf(" 0. Exit \n");


        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 0:
                printf("Exiting the program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
    
}