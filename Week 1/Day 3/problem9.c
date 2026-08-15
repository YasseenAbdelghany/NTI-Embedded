#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to print the alternate elements
       in an array. */

    int arr[100] = {0};
    int size = 0;
    int i = 0;
    char Program_State = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter the size of the array: ");
        scanf("%d", &size);

        printf("Enter the elements of an array:\n");

        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("\nAlternate elements of a given array are: ");

        for (i = 0; i < size; i = i + 2)
        {
            printf("%d ", arr[i]);
        }

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &Program_State);

    } while ((Program_State != 'E') && (Program_State != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}