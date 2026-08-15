#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write C Program to Find the Length of a String. */

    char str[100] = {0};
    int i = 0;
    int length = 0;
    char choice = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter a string: ");
        scanf(" %[^\n]", str);

        for (i = 0; str[i] != '\0'; i++)
        {
            length++;
        }

        printf("\nLength of string: %d", length);

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &choice);

        length = 0;

    } while ((choice != 'E') && (choice != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}