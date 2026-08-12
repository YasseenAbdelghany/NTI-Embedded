#include <stdio.h>

int main()
{// convert decimal to binary
    signed int num = 0;
    unsigned int bit = 31;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Converted binary: ");

    while (bit >= 0)
    {
        if (num & (1 << bit))
            printf("1");
        else
            printf("0");

        bit--;
    }

    printf("\n");

    return 0;
}