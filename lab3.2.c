#include <stdio.h>

struct Student {
    char name[50];       
    int studentId;       
    float score;         
};

int main() {
    int N, i;

  
    printf("Enter number of students: ");
    if (scanf("%d", &N) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    struct Student students[N];

  
    for (i = 0; i < N; i++) {
        printf("Enter student ID, score, and name for student %d: ", i + 1);
        if (scanf("%d %f %s", &students[i].studentId, &students[i].score, students[i].name) != 3) {
            printf("Invalid input.\n");
            return 1;
        }
    }


    printf("\nStudent Information:\n");
    for (i = 0; i < N; i++) {
        printf("Student %d:\n", i + 1);
        printf("ID: %d\n", students[i].studentId);
        printf("Score: %.2f\n", students[i].score);
        printf("Name: %s\n", students[i].name);
        printf("-------------------\n");
    }

    return 0;
}
