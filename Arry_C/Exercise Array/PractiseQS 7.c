//Arrays as function Arguments

#include<stdio.h>

void printNumber (int arr[],int n);

int main(){

int arr[]={1,2,3,4,5,6,7,8,10};
printNumber (arr,9);

return 0;
}
void printNumber(int arr[],int n){

for(int i=0; i<n; i++){
    printf("%d\t",arr[i]);
}
   printf("\n");
}
