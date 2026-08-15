#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to merge two arrays into third array.
       Arrays are assumed to be sorted in ascending order. */

    int arr1[100] = {0};
    int arr2[100] = {0};
    int arr3[200] = {0};
    int size1 = 0;
    int size2 = 0;
    int size3 = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    char Program_State = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nInput number of elements in first array: ");
        scanf("%d", &size1);

        printf("Input %d integers: ", size1);

        for (i = 0; i < size1; i++)
        {
            scanf("%d", &arr1[i]);
        }

        printf("\nInput number of elements in second array: ");
        scanf("%d", &size2);

        printf("Input %d integers: ", size2);

        for (i = 0; i < size2; i++)
        {
            scanf("%d", &arr2[i]);
        }

        i = 0;
        j = 0;
        k = 0;

        while ((i < size1) && (j < size2))
        {
            if (arr1[i] < arr2[j])
            {
                arr3[k] = arr1[i];
                i++;
            }
            else
            {
                arr3[k] = arr2[j];
                j++;
            }

            k++;
        }

        while (i < size1)
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }

        while (j < size2)
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }

        size3 = size1 + size2;

        printf("\nSorted array: ");

        for (i = 0; i < size3; i++)
        {
            printf("%d ", arr3[i]);
        }

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &Program_State);

    } while ((Program_State != 'E') && (Program_State != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}