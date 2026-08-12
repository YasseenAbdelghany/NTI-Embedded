#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to find largest and second largest
       element in an array. */

    int arr[1000] = {0};
    int size = 0;
    int i = 0;
    int largest = 0;
    int second_largest = 0;
    char Program_State = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter size of the array (1-1000): ");
        scanf("%d", &size);

        printf("Enter elements in the array: ");

        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        largest = arr[0];
        second_largest = arr[0];

        for (i = 1; i < size; i++)
        {
            if (arr[i] > largest)
            {
                second_largest = largest;
                largest = arr[i];
            }
            else if ((arr[i] > second_largest) && (arr[i] != largest))
            {
                second_largest = arr[i];
            }
        }

        printf("\nFirst largest = %d", largest);
        printf("\nSecond largest = %d", second_largest);

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &Program_State);

    } while ((Program_State != 'E') && (Program_State != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}