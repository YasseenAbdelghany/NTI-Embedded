#include <stdio.h>

int main()
{// check even or odd
    unsigned int num = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num & 1)
        printf("%d is odd.\n", num);
    else
        printf("%d is even.\n", num);

    return 0;
}