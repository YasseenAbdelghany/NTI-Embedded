#include <stdio.h>

int main()
{// Check vowel or consonant

    char ch = 0;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a vowel.\n", ch);
        break;

    default:
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}