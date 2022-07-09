// Write a program in C to find the number and sum of all integer between 100 and 200 which  are divisible by 9.
#include <stdio.h>

int main()
{
    int i, sum = 0;
    printf("Numbers between 100 and 200, divisible by 9 : \n");
    for (i = 101; i < 200; i++)
    {
        if (i % 9 == 0)
        {
            printf("% 5d", i);
            sum += i;
        }
    }
    printf("\n\nThe sum : %d \n", sum);

    return 0;
}