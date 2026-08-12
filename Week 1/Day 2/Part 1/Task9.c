#include <stdio.h>

int main()
{ // Count leading zeros

    signed int num = 0;
    unsigned int bit = 31;
    unsigned int count = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    while (bit >= 0)
    {
        if (num & (1 << bit))
            break;

        count++;
        bit--;
    }

    printf("Total number of leading zeros in %d is %d\n", num, count);

    return 0;
}