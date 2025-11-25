#include <stdio.h>
int ZoneCode;
float kg;
float total = 0.0;

int main() {
    printf("Enter Zone Code (1-4) and weight in kg: ");
    if (scanf("%d %f", &ZoneCode, &kg) != 2) {
        return 1; 
    }
    
   if (kg < 0)
   {
    printf("Error\n");
    return 0;
   }
   
    switch (ZoneCode) {
        case 1:
            if (kg <= 5) {
                total = kg * 50;
            } else {
                total = kg * 80;
            }
            break;
        case 2:
            if (kg <= 10) {
                total = kg * 150;
            } else {
                total = kg * 250;
            }
            break;
        case 3:
                total = kg * 500;
            break;

        default:
            printf("Invalid Zone Code\n");
            return 0;
    }
    
    printf("Total Cost: %.2f\n", total);
    return 0; 
}