#include <stdio.h>
int main()
{ // check least significant bit

    signed int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)
        printf("LSB of %d is set(1).\n", num);
    else
        printf("LSB of %d is unset (0).\n", num);

    return 0;
}