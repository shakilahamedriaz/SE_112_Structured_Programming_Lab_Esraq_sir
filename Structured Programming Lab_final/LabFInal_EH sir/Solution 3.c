#include<stdio.h>
int main(){

double a,b,add,sub;
printf("Enter the value of a : ");
scanf("%lf",&a);
printf("Enter the value of b : ");
scanf("%lf",&b);

add=a+b;
sub=a-b;

printf("Addition  is    : %.2lf\n",add);
printf("Substraction is : %.2lf\n",sub);



return 0;
}
