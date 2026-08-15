#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to delete an element in an array.
       User will enter the position at which array element
       is to be deleted. */

    int arr[100] = {0};
    int size = 0;
    int i = 0;
    int position = 0;
    char Program_State = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter number of elements in array: ");
        scanf("%d", &size);

        printf("\nEnter %d elements\n", size);

        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("\nEnter the location where you wish to delete element: ");
        scanf("%d", &position);

        if ((position < 1) || (position > size))
        {
            printf("\nDeletion is not possible.");
        }
        else
        {
            for (i = position - 1; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }

            printf("\nResultant array is\n");

            for (i = 0; i < size - 1; i++)
            {
                printf("%d\n", arr[i]);
            }
        }

        printf("\nPress E to exit or any other key to continue: ");
        scanf(" %c", &Program_State);

    } while ((Program_State != 'E') && (Program_State != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}