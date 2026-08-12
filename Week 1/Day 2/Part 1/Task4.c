#include <stdio.h>

int main()
{ // set nth bit

    signed int num = 0;
    unsigned int bit = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Enter nth bit to set (0-31): ");
    scanf("%u", &bit);

    while (bit > 31)
    {
        printf("Invalid input. Please enter a number between 0 and 31: ");
        scanf("%u", &bit);
    }

    num = num | (1 << bit);

    printf("Number after setting bit %u: %d\n", bit, num);

    return 0;
}