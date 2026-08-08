#include <stdio.h>
int main()
{
    signed int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)
        printf("LSB of %d is set(1).\n", num);
    else
        printf("LSB of %d is unset (0).\n", num);

    return 0;
}