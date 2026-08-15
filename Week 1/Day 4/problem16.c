#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to find the frequency of characters. */

    char str[100] = {0};
    char character = '\0';
    int i = 0;
    int frequency = 0;
    char choice = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter a string: ");
        scanf("%99s", str);

        printf("Enter a character to find the frequency: ");
        scanf(" %c", &character);

        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == character)
            {
                frequency++;
            }
        }

        printf("\nFrequency of %c = %d", character, frequency);

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &choice);

        frequency = 0;

    } while ((choice != 'E') && (choice != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}