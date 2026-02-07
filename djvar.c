#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student *students;
    int n, i;
    char choice;

    printf("Enter initial number of students: ");
    scanf("%d", &n);

    students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Grade: ");
        scanf("%f", &students[i].grade);
    }

    printf("\nAdd more students? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y') {
        int new_n;
        printf("Enter new total number of students: ");
        scanf("%d", &new_n);

        students = (struct Student *)realloc(students, new_n * sizeof(struct Student));
        if (students == NULL) {
            printf("Memory reallocation failed!\n");
            return 1;
        }

        for (i = n; i < new_n; i++) {
            printf("\nStudent %d\n", i + 1);
            printf("Name: ");
            scanf("%s", students[i].name);
            printf("Age: ");
            scanf("%d", &students[i].age);
            printf("Grade: ");
            scanf("%f", &students[i].grade);
        }

        n = new_n;
    }

    printf("\nAll students:\n");
    for (i = 0; i < n; i++) {
        printf("%d. Name: %s, Age: %d, Grade: %.2f\n",
               i + 1,
               students[i].name,
               students[i].age,
               students[i].grade);
    }

    free(students);
    students = NULL;

    return 0;
}
