#include <stdio.h>

int main()
{
    float units = 0;
    float bill = 0;
    float surcharge = 0;
    float totalBill = 0;

    printf("Enter total units consumed: ");
    scanf("%f", &units);

    if (units <= 50)
    {
        bill = units * 0.50;
    }
    else if (units <= 150)
    {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    }
    else
    {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20
             + (units - 250) * 1.50;
    }

    surcharge = bill * 0.20;
    totalBill = bill + surcharge;

    printf("Electricity Bill = Rs. %.2f\n", totalBill);

    return 0;
}