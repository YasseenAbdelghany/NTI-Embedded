#include <stdio.h>

int main()
{ // five Numbers divisible by 3
    
    signed int Numbers[5];
    unsigned int count = 0;
    printf("Enter the five numbers:\n");

    while (count < 5)
    {
        scanf("%d", &Numbers[count]);
        count++;
    }

    printf("the Numbers that is divisible by 3:\n");
    
    for (count = 0; count < 5; count++)
    {
       
        if (Numbers[count] % 3 == 0)
        {
            printf("%d \n", Numbers[count]);
        }
    }

    return 0;
}