#include <stdio.h>

struct Student {
    char name[50];       
    int studentId;       
    float score;         
};

int main() {
    int N, i;
    float totalScore = 0.0, average;

    printf("Enter number of students: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
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
        totalScore += students[i].score; 
    }

    average = totalScore / N;

    printf("\nAverage Score: %.2f\n", average);

    return 0;
}
