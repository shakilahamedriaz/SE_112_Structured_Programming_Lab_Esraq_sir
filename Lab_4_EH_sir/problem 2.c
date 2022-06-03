#include<stdio.h>
int main(){

char ch;
int x,y,add,mul,sub,div;

printf("Enter the Operator  : \n");
scanf("%c",&ch);

printf("Enter the value of x :");
scanf("%d",&x);
printf("Enter the value of y : ");
scanf("%d",&y);



switch (ch)
{

case '+':
    add= x+y;
    printf("a+b= %d",add);

    break;

case '-':
     sub= x-y;
     printf("a-b= %d",sub);

     break;

case '*':
     mul= x*y;
     printf("x*y= %d\n",mul);

     break;

case '/':
     if(x>y){
         div=x/y;
     }else{
         div=y/x;
     }
    printf("divison is : %d\n",div);

default:
     printf("Enter a valid Operator to run your program!\n");
    break;
}



return 0;
}


//output--
//for +
//input x=10
//input y=5

//add=15
//sub=5
//div=2