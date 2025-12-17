#include <stdio.h>

int main() {
    int termCode;
    double investmentAmount, apr = 0.0, interest;

    printf("Enter Term Code (1=Short, 2=Medium, 3=Long): ");
    scanf("%d", &termCode);

    printf("Enter Investment Amount: ");
    scanf("%lf", &investmentAmount);

    if (termCode == 1) {  
        if (investmentAmount < 5000)
            apr = 0.03;
        else
            apr = 0.04;

    } else if (termCode == 2) {  
        if (investmentAmount < 10000)
            apr = 0.05;
        else
            apr = 0.06;
    } else if (termCode == 3) {  
        apr = 0.08;
    } else {
        printf("Invalid Term Code\n");
        return 0;
    }

    interest = investmentAmount * apr;
    printf("Total Interest Earned: %.2f\n", interest);

    return 0;
}
