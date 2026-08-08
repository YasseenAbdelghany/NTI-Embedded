#include <stdio.h>

int main()
{ // Count trailing zeros

    signed int num = 0;
    unsigned int bit = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Number of trailing zeros in %d is 32\n", num);
        return 0;
    }
    
    while (bit <= 31)
    {
        if (num & (1 << bit))
            break;

        bit++;
    }

    printf("Number of trailing zeros in %d is %d\n", num, bit);

    return 0;
}