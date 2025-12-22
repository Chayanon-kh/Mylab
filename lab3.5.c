#include <stdio.h>

struct Order {
    int itemId;
    float unitPrice;
    int quantity;
};

int main() {
    int N, i;
    float grandTotal = 0.0;
    float shippingFee = 50.0;  

    scanf("%d", &N);
    struct Order orders[N];

    for (i = 0; i < N; i++) {
        float itemTotal;
        scanf("%d %f %d", &orders[i].itemId, &orders[i].unitPrice, &orders[i].quantity);

        itemTotal = (orders[i].unitPrice * orders[i].quantity) + shippingFee;

        if (itemTotal >= 500.0) {
            itemTotal *= 0.90;
        }

        grandTotal += itemTotal;
    }

    printf("Grand Total: %.2f\n", grandTotal);
    return 0;
}
