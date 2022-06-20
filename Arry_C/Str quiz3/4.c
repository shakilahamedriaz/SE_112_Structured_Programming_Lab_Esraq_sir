//4 Write a C program to calculate the factorial of a given number
#include <stdio.h>


void factorial(int n){

    int fact = 1;

    for(int i=1; i<= n ; i++){
        fact *= i;
    }

    printf("Factorial is %d",fact);
}

int main()
{
    int n;

    printf("Please input factorial number : \n");
    scanf("%d",&n);

    factorial(n);




    return 0;
}
