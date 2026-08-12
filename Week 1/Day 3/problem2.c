#include <stdio.h>
#include <stdlib.h>

int main(void)
{    /* Write a C program to read elements in an array and
       find the sum of array elements. */

    int NUMS[100] = {0};
    int size = 0;
    int i = 0;
    int sum = 0;
    char Program_State = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter size of the array: ");
        scanf("%d", &size);

        printf("Enter %d elements in the array: ", size);

        for (i = 0; i < size; i++)
        {
            scanf("%d", &NUMS[i]);
            sum = sum + NUMS[i];
        }

        printf("\nSum of all elements of array = %d", sum);

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &Program_State);

    } while ((Program_State != 'E') && (Program_State != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}