#include <stdio.h>

int main()
{ // Rotate bits
    unsigned int num , rotation = 0;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter number of rotation: ");
    scanf("%u", &rotation);

    rotation = rotation % 32;

    printf("%u left rotated %u times = %u\n",
           num, rotation,
           (num << rotation) | (num >> (32 - rotation)));

    printf("%u right rotated %u times = %u\n",
           num, rotation,
           (num >> rotation) | (num << (32 - rotation)));

    return 0;
}