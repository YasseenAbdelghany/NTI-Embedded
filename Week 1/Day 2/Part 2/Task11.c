#include <stdio.h>

int main()
{ // multiplication table
    int num = 0;
    int count = 1;

    printf("Input the number (Table to be calculated): ");
    scanf("%d", &num);

    while (count <= 10)
    {
        printf("%d X %d = %d\n", num, count, num * count);
        count++;
    }

    return 0;
}