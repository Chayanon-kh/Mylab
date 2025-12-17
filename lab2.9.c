#include <stdio.h>

int main() {
    int initialStock, currentStock, N, cmdCode, quantity;
    float PENALTY_FEE, totalPenalties = 0.0;

    if (scanf("%d %f %d", &initialStock, &PENALTY_FEE, &N) != 3) {
        return 1;
    }

    currentStock = initialStock;

    for (int i = 0; i < N; i++) {
        if (scanf("%d %d", &cmdCode, &quantity) != 2) {
            break;
        }

        switch (cmdCode) {
            case 1: 
                currentStock += quantity;
                printf("Received %d units.\n", quantity);
                break;

            case 2: 
                if (quantity <= 0) {
                    printf("Error: Quantity must be positive.\n");
                } else if (quantity <= currentStock) {
                    currentStock -= quantity;
                    printf("Shipped %d units.\n", quantity);
                } else {
                    totalPenalties += PENALTY_FEE;
                    printf("FAILURE: Insufficient stock. PENALTY %.2f added.\n", PENALTY_FEE);
                }
                break;

            case 3: 
                printf("Current Stock: %d\n", currentStock);
                printf("Total Penalties: %.2f\n", totalPenalties);
                break;

            default:
                printf("Error: Invalid Command.\n");
        }
    }

    return 0;
}
