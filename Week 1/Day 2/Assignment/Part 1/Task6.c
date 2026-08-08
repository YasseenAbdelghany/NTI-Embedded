#include <stdio.h>

int main()
{ // Find highest order set bit

    signed int num = 0;
    unsigned int bit = 31;

    printf("Enter any number: ");
    scanf("%d", &num);

    while (bit >= 0)
    {
        if (num & (1 << bit))
        {
            printf("Highest order set bit in %d is %d\n", num, bit);
            break;
        }

        bit--;
    }

    return 0;
}