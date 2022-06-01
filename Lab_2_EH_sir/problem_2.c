#include<stdio.h>
int main(){
 int number;
 printf("Enter any integer number : \n");
 scanf("%d",&number);

 if(number%2==0){

     printf("This is an Even number. \n");
 }
else{
    printf("This is an Odd number. \n");
}

    return 0;
}