#include <stdio.h>
#include <stdlib.h>
int main() {
    
    /* Write a C program to input elements in array and
       print all negative elements. */
    int NUMS[100] = {0};
    int size = 0;
    int i = 0 ; 
    char Program_State = '\0';
    int count_negative = 0;
    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter size of the array: ");
        scanf("%d", &size);

        printf("Enter elements in array: ");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &NUMS[i]);
            if (NUMS[i] < 0)
            {
                count_negative++;
            }
        }

        if (count_negative == 0)
        {
            printf("No negative elements found in the array.\n");
        }
        else
        {
        printf("All negative elements in array are: ");
        for (i = 0; i < size; i++)
        {
            if (NUMS[i] < 0)
            {
                printf("%d ", NUMS[i]);
            }
        }
    }
        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &Program_State);

    } while (Program_State != 'E' && Program_State != 'e');

    printf("\nProgram exited.\n");

    return 0;
}