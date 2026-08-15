#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write C Program to Remove all Characters in a String
       Except Alphabet. */

    char str[100] = {0};
    char result[100] = {0};
    int i = 0;
    int j = 0;
    char choice = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter a string: ");
        scanf(" %[^\n]", str);

        for (i = 0; str[i] != '\0'; i++)
        {
            if (((str[i] >= 'a') && (str[i] <= 'z')) ||
                ((str[i] >= 'A') && (str[i] <= 'Z')))
            {
                result[j] = str[i];
                j++;
            }
        }

        result[j] = '\0';

        printf("\nOutput String: %s", result);

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &choice);

        j = 0;

    } while ((choice != 'E') && (choice != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}