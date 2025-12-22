#include <stdio.h>

int main() {
    int N_DAYS, day;
    float initialBudget;
    float remainingBudget;
    float dailySpend;

    // รับค่า: initialBudget และ N_DAYS
    if (scanf("%f %d", &initialBudget, &N_DAYS) != 2) {
        return 1;  // ถ้าอ่านค่าไม่ได้ ให้จบโปรแกรม
    }

    remainingBudget = initialBudget;

    // พิมพ์หัวตาราง
    printf("Day | Spend | Remaining\n");
    printf("---------------------------\n");

    // วนลูปตามจำนวนวัน
    for (day = 1; day <= N_DAYS; day++) {
        dailySpend = 0.0;

        // เงื่อนไขการใช้จ่าย
        if (remainingBudget >= 500.00) {
            dailySpend = 100.00;
        } else if (remainingBudget >= 100.00) {
            dailySpend = 50.00;
        } else if (remainingBudget > 0.0) {
            dailySpend = 20.00;
        } else {
            dailySpend = 0.0;
        }

        
        if (dailySpend > remainingBudget) {
            dailySpend = remainingBudget;
        }

        
        remainingBudget -= dailySpend;

     
        printf("%d | %.2f | %.2f\n", day, dailySpend, remainingBudget);
    }

 
    printf("---------------------------\n");
    printf("Final Budget: %.2f\n", remainingBudget);

    return 0;
}
