#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write C Program to Concatenate Two Strings. */

    char str1[200] = {0};
    char str2[100] = {0};
    int i = 0;
    int j = 0;
    char choice = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter first string: ");
        scanf(" %[^\n]", str1);

        printf("Enter second string: ");
        scanf(" %[^\n]", str2);

        for (i = 0; str1[i] != '\0'; i++)
        {
        }

        for (j = 0; str2[j] != '\0'; j++)
        {
            str1[i] = str2[j];
            i++;
        }

        str1[i] = '\0';

        printf("\nAfter concatenation: %s", str1);

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &choice);

    } while ((choice != 'E') && (choice != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}