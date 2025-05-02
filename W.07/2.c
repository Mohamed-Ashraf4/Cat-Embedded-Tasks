#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 4

const char* subjects[NUM_SUBJECTS] = {
    "Programming",
    "Data Structures",
    "Discrete Math",
    "Algorithms"
};

typedef struct {
    int id;
    int grades[NUM_SUBJECTS];
} Student;


void assignPresetGrades(Student students[]) {
    int presetGrades[NUM_STUDENTS][NUM_SUBJECTS] = {
        {90, 85, 78, 88},
        {76, 80, 85, 90},
        {65, 70, 60, 75},
        {88, 92, 84, 89},
        {95, 94, 96, 93},
        {55, 60, 58, 62},
        {77, 79, 81, 80},
        {83, 87, 86, 88},
        {72, 74, 70, 73},
        {69, 65, 68, 70}
    };

    for (int i = 0; i < NUM_STUDENTS; i++) {
        students[i].id = 1000 + i;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            students[i].grades[j] = presetGrades[i][j];
        }
    }
}

int findStudentIndexById(Student students[], int id) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (students[i].id == id) {
            return i;
        }
    }
    return -1;
}

void displayGrades(Student student) {
    printf("Grades for Student ID %d:\n", student.id);
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("  %s: %d\n", subjects[i], student.grades[i]);
    }
}

void editGrades(Student* student) {
    printf("Editing grades for Student ID %d\n", student->id);
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Enter new grade for %s: ", subjects[i]);
        scanf("%d", &student->grades[i]);
    }
    printf("Grades updated.\n");
}

int main() {
    Student students[NUM_STUDENTS];
    assignPresetGrades(students);

    int choice;
    do {
        printf("\n--- Student Grade Management System ---\n");
        printf("1. View student grades\n");
        printf("2. Edit student grades (Admin)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        int id, index;
        switch (choice) {
            case 1:
                printf("Enter student ID: ");
                scanf("%d", &id);
                index = findStudentIndexById(students, id);
                if (index != -1) {
                    displayGrades(students[index]);
                } else {
                    printf("Invalid Student ID!\n");
                }
                break;
            case 2:
                printf("Enter admin password: ");
                char password[20];
                scanf("%s", password);
                if (strcmp(password, "admin123") != 0) {
                    printf("Incorrect password!\n");
                    break;
                }
                printf("Enter student ID to edit: ");
                scanf("%d", &id);
                index = findStudentIndexById(students, id);
                if (index != -1) {
                    editGrades(&students[index]);
                } else {
                    printf("Invalid Student ID!\n");
                }
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option!\n");
        }

    } while (choice != 0);

    return 0;
}
