#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write C Program to Copy String Without Using strcpy(). */

    char str1[100] = {0};
    char str2[100] = {0};
    int i = 0;
    char choice = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter string s1: ");
        scanf(" %[^\n]", str1);

        for (i = 0; str1[i] != '\0'; i++)
        {
            str2[i] = str1[i];
        }

        str2[i] = '\0';

        printf("\nString s2: %s", str2);

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &choice);

    } while ((choice != 'E') && (choice != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}