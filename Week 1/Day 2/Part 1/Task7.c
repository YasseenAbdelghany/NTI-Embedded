#include <stdio.h>

int main()
{ // Find lowest order set bit

    signed int num = 0;
    unsigned int bit = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    while (bit <= 31)
    {
        if (num & (1 << bit))
        {
            printf("Lowest order set bit in %d is %d\n", num, bit);
            break;
        }

        bit++;
    }

    return 0;
}