#ifndef STUDENT_H
#define STUDENT_H

typedef struct Student
{
    char name[100];
    int id;
    float grade;
} Student;

void printStudents (Student students[], int size);
float findAverageGrade(Student students[], int size);
int countStudents(Student students[], int size);
int searchByID(Student students[], int size, int id);
void sortStudentsByGrade(Student students[], int size);


#endif
