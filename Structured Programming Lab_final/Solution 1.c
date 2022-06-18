//Write a program in C to store elements in an array and print it
#include<stdio.h>
int main()
{

    int A[500],i,n;
    printf("Enter size of Array: ");

    scanf("%d",&n);
    printf("Enter %d elements to store in the array :",n);
    for(i=0; i<n; i++)
    {

        scanf("%d",&A[i]);
    }

    printf("Elements of arrays are :");

    for(i=0; i<n; i++)
    {

        printf("%d\t", A[i]);
    }

    return 0;
}
