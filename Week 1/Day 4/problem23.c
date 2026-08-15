#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to remove spaces or excess blanks
       from a string. */

    char str[200] = {0};
    char result[200] = {0};
    int i = 0;
    int j = 0;
    int space_found = 0;
    char choice = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter some text:\n");
        scanf(" %[^\n]", str);

        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ' ')
            {
                if (space_found == 0)
                {
                    result[j] = str[i];
                    j++;
                    space_found = 1;
                }
            }
            else
            {
                result[j] = str[i];
                j++;
                space_found = 0;
            }
        }

        result[j] = '\0';

        printf("\nText after removing blanks:\n");
        printf("%s", result);

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &choice);

        j = 0;
        space_found = 0;

    } while ((choice != 'E') && (choice != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}