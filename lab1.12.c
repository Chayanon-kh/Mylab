#include <stdio.h>
int main()
{
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;

    if (scanf("%d %f", &planCode, &dataUsage_GB) != 2)
    {
        return 1;
    }
    if (dataUsage_GB <= 0)
    {
        printf("Error\n");
        return 0;
    }
    if (planCode == 1 || planCode == 2)
    {
        if(planCode == 1)
        {
            if (dataUsage_GB <= 10)
            {
                totalBill = 299.0;
            }
            else
            {
                totalBill  = 299 + 10*(dataUsage_GB - 10);
            }
        }
        else if (planCode == 2)
        {
            if (dataUsage_GB <= 20)
            {
                totalBill = 599.0;
            }
            else
            {
                totalBill = 50 + 599 + 5*(dataUsage_GB - 20);
            }
        }



        printf("%.2f\n", totalBill);
    }
    else
    {
        printf("Invalid Plan Code\n");
    }

    return 0;
}