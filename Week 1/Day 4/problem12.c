#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to enter an element of second
       array inside the first array and print it. */

    int arr1[20] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int arr2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int arr3[20] = {0};
    int i = 0;
    int j = 0;
    int k = 0;
    char choice = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        while (i < 10)
        {
            arr3[k] = arr1[i];
            k++;
            arr3[k] = arr2[i];
            k++;

            i++;
        }

        printf("\nArray after inserting second array into first array:\n");

        for (j = 0; j < 20; j++)
        {
            printf("%d ", arr3[j]);
        }

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &choice);

        i = 0;
        k = 0;

    } while ((choice != 'E') && (choice != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}