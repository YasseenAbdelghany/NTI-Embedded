#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to insert element in array at
       specified position. */

    int arr[100] = {0};
    int size = 0;
    int i = 0;
    int element = 0;
    int position = 0;
    char Program_State = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter size of the array: ");
        scanf("%d", &size);

        printf("Enter elements in array: ");

        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("Enter element to insert: ");
        scanf("%d", &element);

        printf("Enter the element position: ");
        scanf("%d", &position);

        for (i = size; i >= position; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[position - 1] = element;
        size++;

        printf("\nArray elements after insertion: ");

        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &Program_State);

    } while ((Program_State != 'E') && (Program_State != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}