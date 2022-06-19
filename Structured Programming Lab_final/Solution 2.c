//2. Write a program in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
int main()
{

    int i,A[100],n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    //now we taking input with n size
    printf("Enter the elements of array: ");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Displaying Reverse Order : \n");

    for(i=n; i>=1; i--)
    {
        printf("%d\n",A[i]);
    }

    return 0;
}
