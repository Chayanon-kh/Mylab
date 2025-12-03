#include <stdio.h>

int main() {

    int N, i ,quantity;
float unit_price, itemCost, grand_total = 0.0;
float totalprice;
        if (scanf("%d", &N) != 1)
        {
            return 1;
        }
       for (i = 0; i < N; i++)
       {
            scanf("%f %d", &unit_price, &quantity);
            if (unit_price >= 1000)
            {
                itemCost = unit_price * 0.10;
                unit_price = unit_price - itemCost;
            }
             printf("itemCost: %.2f\n", unit_price * quantity);
            totalprice = unit_price * quantity;
            grand_total += totalprice;
               
       }
        




    printf("grand_total: %.2f\n", grand_total);    
    return 0;
}