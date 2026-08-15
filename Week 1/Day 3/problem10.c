#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to identify missing numbers in a given array. */

    int arr[100] = {0};
    int size = 0;
    int i = 0;
    int j = 0;
    int missing = 0;
    int found = 0;
    char Program_State = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter size of array: ");
        scanf("%d", &size);

        printf("Enter elements into array: ");

        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("\nMissing element is: ");

        for (missing = 1; missing <= size + 1; missing++)
        {
            found = 0;

            for (j = 0; j < size; j++)
            {
                if (arr[j] == missing)
                {
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("%d ", missing);
            }
        }

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &Program_State);

    } while ((Program_State != 'E') && (Program_State != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}