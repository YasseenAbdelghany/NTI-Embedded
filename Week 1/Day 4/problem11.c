#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write C Program to Find the Median of the
       Elements after Merging these 2 Sorted Arrays
       with Same Size. */

    int arr1[100] = {0};
    int arr2[100] = {0};
    int arr3[200] = {0};
    int size = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int temp = 0;
    int median = 0;
    char choice = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter size of array_1: ");
        scanf("%d", &size);

        printf("Enter elements of array_1:\n");

        for (i = 0; i < size; i++)
        {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &arr1[i]);
        }

        printf("\nEnter elements of array_2:\n");

        for (i = 0; i < size; i++)
        {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &arr2[i]);
        }

        for (i = 0; i < size; i++)
        {
            arr3[i] = arr1[i];
        }

        for (i = 0; i < size; i++)
        {
            arr3[size + i] = arr2[i];
        }

        for (i = 0; i < (size * 2) - 1; i++)
        {
            for (j = i + 1; j < size * 2; j++)
            {
                if (arr3[i] > arr3[j])
                {
                    temp = arr3[i];
                    arr3[i] = arr3[j];
                    arr3[j] = temp;
                }
            }
        }

        k = size * 2;

        median = (arr3[(k / 2) - 1] + arr3[k / 2]) / 2;

        printf("\nMedian is %d", median);

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &choice);

    } while ((choice != 'E') && (choice != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}