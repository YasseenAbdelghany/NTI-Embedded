#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to left rotate an array by n position. */

    int arr[100] = {0};
    int size = 0;
    int rotate = 0;
    int i = 0;
    int j = 0;
    int temp = 0;
    char choice = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter number of elements in array: ");
        scanf("%d", &size);

        printf("Enter %d elements array: ", size);

        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("Enter number of times to left rotate: ");
        scanf("%d", &rotate);

        printf("\nArray before rotation: ");

        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }

        for (i = 0; i < rotate; i++)
        {
            temp = arr[0];

            for (j = 0; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            arr[size - 1] = temp;
        }

        printf("\n\nArray after rotation: ");

        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &choice);

    } while ((choice != 'E') && (choice != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}