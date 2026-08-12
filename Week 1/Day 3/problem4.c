#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to input elements in array from user
       and count even and odd elements in array. */

    int arr[100] = {0};
    int size = 0;
    int i = 0;
    int even_count = 0;
    int odd_count = 0;
    char Program_State = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter size of the array: ");
        scanf("%d", &size);

        printf("\nEnter %d elements in array: ", size);

        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);

            if ((arr[i] % 2) == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }

        printf("\nTotal even elements: %d", even_count);
        printf("\nTotal odd elements: %d", odd_count);

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &Program_State);

    } while ((Program_State != 'E') && (Program_State != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}