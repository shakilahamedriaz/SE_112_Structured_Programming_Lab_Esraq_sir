#include<stdio.h>
int main(){


int i;
float sum ,x;
printf("Please inter 10 numbers : ");
for(i=1; i<=10; i++){
    scanf("%f",&x);

    sum +=x;

}
printf("The sum is = %.2f\n",sum);

printf("The average is = %.2f",sum/2);



return 0;
}
