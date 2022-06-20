//2 Write a program in C to display the n terms of odd natural number and their sum
#include <stdio.h>

int main()
{
    int n,sum=0;

    printf("Please input any digit num : \n");
    scanf("%d",&n);

    printf("Natural odd number : ");

    for (int i = 1; i <= n; i++)
    {
        if(i%2 != 0){
            sum += i;
            printf(" %d",i);
        }
    }

    printf("\nOdd natural number sum : %d\n",sum);


    return 0;
}
