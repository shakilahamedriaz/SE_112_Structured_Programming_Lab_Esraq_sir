#include<stdio.h>
int main(){

float a,b,c,sum;  //here a,b,c is the angels of triangle;
printf("Enter three angels fo a triangle :\n");
scanf("%f %f %f",&a,&b,&c);

sum=a+b+c;       //the sum of three angels

if(sum==180){
    printf("Triangle is Valid\n");
}
else{
    printf("Triangle is Invalid\n");
}

    return 0;
}