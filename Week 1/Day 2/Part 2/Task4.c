#include <stdio.h>

int main()
{// profit or loss

    unsigned int costPrice = 0;
    unsigned int sellingPrice = 0;
    unsigned int result = 0;

    printf("Enter cost price: ");
    scanf("%d", &costPrice);

    printf("Enter selling price: ");
    scanf("%d", &sellingPrice);

    if (sellingPrice > costPrice)
    {
        result = sellingPrice - costPrice;
        printf("Profit = %d\n", result);
    }
    else if (costPrice > sellingPrice)
    {
        result = costPrice - sellingPrice;
        printf("Loss = %d\n", result);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}