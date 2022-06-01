#include<stdio.h>
int main(){

int num,sum,a,b,c,d,m1,m2,m3,m4;
scanf("%d",&num);

a=num/10;
m4=num%10;
b=a/10;
m3=a%10;
c=b/10;
m2=b%10;
d=c/10;
m1=c%10;

sum=m4+m1;
printf("Sum of the first and last digit : %d\n",sum);



return 0;
}
