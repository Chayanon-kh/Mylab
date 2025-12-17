#include <stdio.h>

int main() {
    int nMonths, successCount = 0;
    double dailyDeposit, monthlyTotal;

    printf("Enter number of months: ");
    scanf("%d", &nMonths);

    for (int month = 1; month <= nMonths; month++) {
        monthlyTotal = 0.0;
        printf("Month %d:\n", month);

        while (1) {
            printf("  Enter daily deposit (0.00 to stop): ");
            scanf("%lf", &dailyDeposit);

            if (dailyDeposit == 0.0) {
                break;
            }

            monthlyTotal += dailyDeposit;
        }

        printf("  Total for month %d: %.2f\n", month, monthlyTotal);

        if (monthlyTotal >= 500.0) {
            successCount++;
        }
    }

    printf("\nNumber of successful months: %d\n", successCount);

    return 0;
}
