//3. Write a program in C to find the sum of all elements of the array

#include<stdio.h>
int main()
{


int A[100],n,i,sum=0;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the elements of the array : ");

for(i=1; i<=n; i++){

    scanf("%d",&A[i]);
    sum+=A[i];
}
  printf("Sum of the total elements of the  array is : %d ",sum);



return 0;
}