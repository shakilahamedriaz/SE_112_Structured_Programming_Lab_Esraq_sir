//4. Write a program in C to copy the elements of one array into another array
#include<stdio.h>
int main(){

int arr1[100], arr2[100];
int i,n;
printf("Enter the elements to be stored : \n");
scanf("%d",&n);

printf("Input %d elements in array : \n",n);
for(i=0; i<n; i++){
    printf("Element %d: ",i);
    scanf("%d",&arr1);

}

for(i=0; i<n; i++){
    arr1[i]=arr2[i];
}


    printf("\nThe elements stored in the first array are :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr1[i]);
    }


    printf("\n\nThe elements copied into the second array are :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr2[i]);
    }
	       printf("\n\n");


return 0;
}
