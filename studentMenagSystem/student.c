#include "student.h"
#include <stdio.h>

void printStudents (Student students[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
    printf("Name: %s\n", students[i].name);
    printf("ID: %d\n", students[i].id);
    printf("Grade: %.2f\n", students[i].grade);
    }
}

float findAverageGrade(Student students[], int size)
{
    int i, sum = 0, average;

    for (i = 0; i < size; i++)
    {
        sum += students[i].grade;
    }
    average = sum / (float)size;

    return (average);
}

int countStudents(Student students[], int size)
{
    return (size);
}

int searchByID(Student students[], int size, int id)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (students[i].id == id)
        {
            printf("Name: %s\n", students[i].name);
            printf("ID: %d\n", students[i].id);
            printf("Grade: %.2f\n", students[i].grade);
            return (id);
        }
    }
	printf("No student found with this ID");
	return (-1);
}

void sortStudentsByGrade(Student students[], int size)
{
    int i, j, swapped;
    Student tmp;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < size - 1 - i; j++)
        {
            if (students[j].grade < students[j + 1].grade)
            {
                tmp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = tmp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}