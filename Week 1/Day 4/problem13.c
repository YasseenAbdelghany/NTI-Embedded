#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to input elements in array and put
       even and odd elements in separate array. */

    int arr[100] = {0};
    int even_arr[100] = {0};
    int odd_arr[100] = {0};
    int size = 0;
    int even_size = 0;
    int odd_size = 0;
    int i = 0;
    char choice = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter size of the array: ");
        scanf("%d", &size);

        printf("Enter elements in the array: ");

        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);

            if ((arr[i] % 2) == 0)
            {
                even_arr[even_size] = arr[i];
                even_size++;
            }
            else
            {
                odd_arr[odd_size] = arr[i];
                odd_size++;
            }
        }

        printf("\nElements of even array:\n");
        printf("Elements in the array: ");

        for (i = 0; i < even_size; i++)
        {
            printf("%d ", even_arr[i]);
        }

        printf("\n\nElements of odd array:\n");
        printf("Elements in the array: ");

        for (i = 0; i < odd_size; i++)
        {
            printf("%d ", odd_arr[i]);
        }

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &choice);

        even_size = 0;
        odd_size = 0;

    } while ((choice != 'E') && (choice != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}