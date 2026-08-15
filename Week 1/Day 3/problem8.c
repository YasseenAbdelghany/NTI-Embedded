#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Write a C program to read an age of 15 persons and
       find how many fall under baby, school and adult life
       using while loop. */

    int age = 0;
    int i = 0;
    int baby_count = 0;
    int school_count = 0;
    int adult_count = 0;
    char Program_State = '\0';

    do
    {
        system("cls"); // Clear the console screen (Windows)

        printf("\nEnter 15 ages: ");

        while (i < 15)
        {
            scanf("%d", &age);

            if ((age >= 0) && (age <= 5))
            {
                baby_count++;
            }
            else if ((age >= 6) && (age <= 17))
            {
                school_count++;
            }
            else if (age >= 18)
            {
                adult_count++;
            }

            i++;
        }

        printf("\nNumbers of Still a baby: %d", baby_count);
        printf("\nNumbers of Attending school: %d", school_count);
        printf("\nNumbers of Adult life: %d", adult_count);

        printf("\n\nPress E to exit or any other key to continue: ");
        scanf(" %c", &Program_State);

        i = 0;
        baby_count = 0;
        school_count = 0;
        adult_count = 0;

    } while ((Program_State != 'E') && (Program_State != 'e'));

    printf("\nProgram exited.\n");

    return 0;
}