#include <stdio.h>

int main()
{ // Flip all bits

    signed int num = 0;
    signed int result = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    result = ~num;

    printf("Original number = %d (in decimal)\n", num);
    printf("Number after bits are flipped = %d (in decimal)\n", result);

    return 0;
}