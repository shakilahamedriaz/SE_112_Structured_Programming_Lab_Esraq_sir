#include<stdio.h>
int main(){

int choice, i, factorial=1, number, num, take,j=1,n,f,f1,f2;;

printf("\n___________\n");

printf("Choice are given below. You have to chose by press a digit that is mentioned here.\n");
printf("1: for Factorial\n");
printf("2: for prime or Not\n");
printf("3: for Even/Odd\n");
printf("4: for Fibonacci\n");
printf("5: for Exit\n");

printf("\n___________\n");

printf("Enter your Choice : ");
scanf("%d",&choice);


switch (choice)
{
case 1:

    printf("Enter a number : ");
    scanf("%d",&number);
    for(i=1; i<=number; i++){
        factorial=factorial*i;
    }
    printf("Factorial of %d is : %d ",number,factorial);

break;


case 2:

     printf("Enter any Positive Number: ");
     scanf("%d",&num);
    for(i=2; i<=num; i++){
        if(num%i==0){
        take++;
        break;

        }
    }
    if(take==0){
        printf("%d is Prime number.\n",num);
    }
    else{
        printf("%d is Not a prime number.\n",num);
    }

break;


case 3:

    printf("Enter a Number: ");
    scanf("%d",&number);

    if(number%2==0){
        printf("%d is Even number \n",number);
    }
    else{
        printf("%d is Odd number \n",number);
    }


break;

case 4:
printf("Enter Number of Fibonacci Values : \n");
    scanf("%d",&n);
    printf("Fibonacci terms\n");
    f=0;
    f1=1;
    f2=1;
    do
    {
        j++;
        printf("%d\n",f);
        f1=f2;
        f2=f;
        f=f1+f2;
    }
    while(j<=n);

default:
     printf("Exit -NO case here!");
    break;
}

    return 0;
}

//Output--

//1st_case
//enter your choice: 1
//enter a number: 5
//Factorial of 5 is: 120

//2nd_case
//enter your choice: 2
//Enter any positive number: 44
//44 is not a prime number.

//3rd_case
//enter your choice: 3
//Enter a Number: 5
//5 is Odd number

//exit/dafult case
//enter your choice except 1,2,3
//Exit-No case here !
