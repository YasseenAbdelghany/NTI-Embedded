#include <stdio.h>

int main()
{// check nth bit
    signed int num = 0;
    unsigned int bit = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &bit);
    
    while (bit > 31 || bit < 0)
    {
        printf("Invalid input. Please enter a number between 0 and 31: ");
        scanf("%d", &bit);
    }
  

    if (num & (1 << bit))
        printf("Bit %d of %d is set (1).\n", bit, num);
    else
        printf("Bit %d of %d is unset (0).\n", bit, num);

    return 0;
}