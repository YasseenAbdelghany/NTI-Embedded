#include <stdio.h>
int main()
{
    signed int num;
   
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("signed int size: %zu bytes\n", sizeof(num)); // 4Bytes - 32bits
    int MSB = (num >> 31);
    if (MSB & 1)
        printf("MSB of %d is set(1).\n", num);
    else
        printf("MSB of %d is unset (0).\n", num);

    return 0;
}