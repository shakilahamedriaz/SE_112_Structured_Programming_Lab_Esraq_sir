#include<stdio.h>
int main(){

char ch;
int x,y,add,mul,sub,div;

printf("Enter the value of x");
printf("Enter the value of y");

printf("Enter the Operation: ");
scanf("%d",&ch);



switch (ch)
{
case '+':
    add= x+y;
    printf("a+b=%d",add);

    break;

case '-':
     sub= x-y;
     printf("a-b=%d",sub);

     break;

case '*':
     mul= x*y;
     printf("")         


default:
    break;
}



return 0;
}