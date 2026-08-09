#include <stdio.h>

int main()
{// first 10 natural numbers and their sum
    int num = 1;
    int sum = 0;

    printf("The first 10 natural numbers are: ");

    while (num <= 10)
    {
        printf("%d ", num);
        sum = sum + num;
        num++;
    }

    printf("\nThe Sum is: %d\n", sum);

    return 0;
}