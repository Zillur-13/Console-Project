#ifndef STUDENT_H
#define STUDENT_H

#define MAX 100

struct Student {
    int id;
    char name[20];
    char department[25];
    float gpa;
    char email[30];
};

extern struct Student students[MAX];
extern int studentCount;

void addStudent();
void viewStudents();
void searchStudent();
void updateStudent();
void deleteStudent();


#endif // STUDENT_H