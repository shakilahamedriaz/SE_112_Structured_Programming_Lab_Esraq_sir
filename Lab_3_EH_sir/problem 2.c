#include<stdio.h>
int main(){

int n,i,fact_value=1;
printf("Enter the number : ");
scanf("%d",&n);

for(i=1; i<=n; i++){

    fact_value=fact_value*i;
}
printf("Factorial of %d is %d",n,fact_value);

return 0;
}
