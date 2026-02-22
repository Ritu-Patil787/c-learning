#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 256

int main() {
    FILE *file = fopen("students.csv", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char line[MAX_LINE];
    int row = 0;
    int totalMarks = 0;
    int studentCount = 0;

    printf("Parsed CSV Data:\n\n");

    while (fgets(line, sizeof(line), file)) {

        // Skip header line
        if (row == 0) {
            row++;
            continue;
        }

        char *token;
        token = strtok(line, ",");

        char name[50];
        int age;
        int marks;

        if (token != NULL) {
            strcpy(name, token);
        }

        token = strtok(NULL, ",");
        if (token != NULL) {
            age = atoi(token);
        }

        token = strtok(NULL, ",");
        if (token != NULL) {
            marks = atoi(token);
        }

        printf("Name: %s | Age: %d | Marks: %d\n", name, age, marks);

        totalMarks += marks;
        studentCount++;
    }

    fclose(file);

    if (studentCount > 0) {
        float average = (float)totalMarks / studentCount;
        printf("\nTotal Students: %d\n", studentCount);
        printf("Average Marks: %.2f\n", average);
    }

    return 0;
}
