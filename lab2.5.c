#include <stdio.h>

int main() {
    int score;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    while (1) {
        printf("Enter score (0-100) or -1 to stop: ");
        scanf("%d", &score);

        if (score == -1) {
            break; 
        }

        if (score >= 80 && score <= 100) {
            countA++;
        } else if (score >= 70) {
            countB++;
        } else if (score >= 60) {
            countC++;
        } else if (score >= 50) {
            countD++;
        } else if (score >= 0) {
            countF++;
        } else {
            printf("Invalid score. Please enter 0-100 or -1.\n");
        }
    }

    printf("\nGrade Summary:\n");
    printf("A: %d students\n", countA);
    printf("B: %d students\n", countB);
    printf("C: %d students\n", countC);
    printf("D: %d students\n", countD);
    printf("F: %d students\n", countF);

    return 0;
}
