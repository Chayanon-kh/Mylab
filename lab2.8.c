#include <stdio.h>

int main() {
    int N, studentId, score, totalClasses, absentClasses;
    int passCount = 0, failCount = 0;

    printf("Enter number of students: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d %d %d", &studentId, &score, &totalClasses, &absentClasses);

        float attendance = 100.0 * (totalClasses - absentClasses) / totalClasses;

        printf("Student %d: ", studentId);

        if (score >= 50 && attendance >= 75.0) {
            printf("PASS\n");
            passCount++;
        } else {
            printf("FAIL - ");
            if (score < 50 && attendance < 75.0)
                printf("Both Score and Attendance\n");
            else if (score < 50)
                printf("Low Score\n");
            else
                printf("Low Attendance\n");
            failCount++;
        }
    }

    printf("--- Summary ---\n");
    printf("Total PASS: %d\n", passCount);
    printf("Total FAIL: %d\n", failCount);

    return 0;
}
