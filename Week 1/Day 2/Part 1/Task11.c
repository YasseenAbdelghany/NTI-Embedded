#include <stdio.h>

int main()
{ // Count total number of ones and zeros

    signed int num = 0;
    unsigned int bit = 0;
    unsigned int ones = 0;
    unsigned int zeros = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    while (bit <= 31)
    {
        if (num & (1 << bit))
            ones++;
        else
            zeros++;

        bit++;
    }

    printf("Total zero bits is %d\n", zeros);
    printf("Total one bits is %d\n", ones);

    return 0;
}