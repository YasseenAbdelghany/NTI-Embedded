#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to declare, initialize, input elements
       in array and print array. */

    int arr[100] = {0};
    int size = 0;
    int i = 0;
    char choice = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter size of array: ");
        scanf("%d", &size);

        printf("Enter %d elements in the array: ", size);

        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("\nElements in array are: ");

        for (i = 0; i < size; i++)
        {
            printf("%d", arr[i]);

            if (i < (size - 1))
            {
                printf(", ");
            }
        }

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &choice);

    } while ((choice != 'E') && (choice != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}