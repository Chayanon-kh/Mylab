#include <stdio.h>
int main()
{
    int Category;
    float price;
    float totel = 0.0;
    float VatAmount = 0.0;

    if (scanf("%f %d", &price, &Category) != 2)
    {
        return 1;
    }
    if (price < 0)
    {
        printf("Error\n");
        return 0;
    }

    if (Category >= 1 && Category <= 3)
    {

        if (Category == 1)
        {
            totel = price * 1.07;
        }
        else if (Category == 2)
        {
            totel = price;
        }
        else if (Category == 3)
        {
            totel = price * 1.15;
        }

        VatAmount = totel - price;
        printf("Vat Amount: %.2f\n", VatAmount);
        printf("Total Price: %.2f\n", totel);
    }
    else
    {
        printf("Invalid Category\n");
        printf("Total Price: %.2f\n", totel);
    }

    return 0;
}