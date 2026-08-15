#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to count vowels, consonants,
       digits and white-spaces in a string. */

    char str[200] = {0};
    int i = 0;
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int white_spaces = 0;
    char choice = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter a line of string: ");
        scanf(" %[^\n]", str);

        for (i = 0; str[i] != '\0'; i++)
        {
            if ((str[i] == 'a') || (str[i] == 'e') ||
                (str[i] == 'i') || (str[i] == 'o') ||
                (str[i] == 'u') || (str[i] == 'A') ||
                (str[i] == 'E') || (str[i] == 'I') ||
                (str[i] == 'O') || (str[i] == 'U'))
            {
                vowels++;
            }
            else if (((str[i] >= 'a') && (str[i] <= 'z')) ||
                     ((str[i] >= 'A') && (str[i] <= 'Z')))
            {
                consonants++;
            }
            else if ((str[i] >= '0') && (str[i] <= '9'))
            {
                digits++;
            }
            else if (str[i] == ' ')
            {
                white_spaces++;
            }
        }

        printf("\nVowels : %d", vowels);
        printf("\nConsonants : %d", consonants);
        printf("\nDigits : %d", digits);
        printf("\nWhite spaces : %d", white_spaces);

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &choice);

        vowels = 0;
        consonants = 0;
        digits = 0;
        white_spaces = 0;

    } while ((choice != 'E') && (choice != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}