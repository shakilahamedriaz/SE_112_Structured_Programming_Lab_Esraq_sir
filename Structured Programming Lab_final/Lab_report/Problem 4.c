// Write a program in C to copy the elements of one array into another array

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int i, n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    // coping elements of first array to second array
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    // printing the elements of first array
    printf("\nThe elements stored in the first array are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%6d", arr1[i]);
    }
    // printing the elements copied into the second array
    printf("\n\nThe elements copied into the second array are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%6d", arr2[i]);
    }

    printf("\n\n");

    return 0;
}