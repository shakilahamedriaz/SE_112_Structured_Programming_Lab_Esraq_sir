#include<stdio.h>
int main(){

float temp_F,Centigrade;
printf("Enter temperature of city in F :");
scanf("%f",&temp_F);

Centigrade=(5*temp_F-160)/9;

printf("Temperature in Centigrade is : %.4f\n",Centigrade);

return 0;

}
