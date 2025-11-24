#include <stdio.h>

int main() {
    int Type;
    float kWh;
    float total = 0.0;
    printf("1||2: ");
    scanf("%d %f", &Type, &kWh);   
    
    if (Type == 1) {
        if (kWh <= 100) {
            total = kWh * 3;
        } else {
            total = kWh * 4;
        }
    } else if (Type == 2) {
        if (kWh <= 500) {
            total = kWh * 5;
        } else {
            total = kWh * 6.5;
        }
    } else {
        printf("Invalid Type\n");
        return 1;
    }
 
printf("Total: %.2f\n", total);
    return 0;
}