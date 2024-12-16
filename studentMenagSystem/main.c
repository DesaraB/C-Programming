#include "student.h"
#include <stdio.h>

int main()
{
	int choice = 0;
	int size;

	Student students[] = 
	{
        {"Alice", 101, 85.5},
        {"Bob", 102, 90.0},
        {"Charlie", 103, 78.5},
        {"Diana", 104, 92.0},
        {"Evan", 105, 88.0}
    };

	size = sizeof(students) / sizeof(students[0]);

    while (choice != 5) {
        printf("\nMenu:\n");
        printf("1. Print all students\n");
        printf("2. Find average grade\n");
        printf("3. Search student by ID\n");
        printf("4. Sort students by grade\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                printStudents(students, size);
                break;
            case 2:
                printf("\nAverage Grade: %.2f\n", findAverageGrade(students, size));
                break;
			case 3:
                printf("\nEnter student ID to search: ");
                int id;
                scanf("%d", &id);
                searchByID(students, size, id);
                break;
            case 4:
                sortStudentsByGrade(students, size);
                printf("\nStudents sorted by grade in descending order.\n");
                break;
            case 5:
                printf("Exiting program.\n");
				return (1);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

