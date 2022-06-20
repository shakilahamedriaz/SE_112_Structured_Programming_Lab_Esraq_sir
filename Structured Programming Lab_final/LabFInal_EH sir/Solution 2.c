#include<stdio.h>
int main(){

int a,b,add,sub,mul,div;
printf("Enter the value of a : ");
scanf("%d",&a);
printf("Enter the value of b : ");
scanf("%d",&b);


add=a+b;
sub=a-b;
mul=a*b;
div=a/b;

printf("Addition of a and b : %d\n",add);
printf("Substraction of a and b :%d \n",sub);
printf("Multipication of a and b :%d\n ",mul);
printf("Division  of a and b : %d\n",div);




return 0;
}
