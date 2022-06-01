#include<stdio.h>
int main(){


double bs,da, hr, gs;
scanf("%lf",&bs);

da= 0.4*bs;
hr= 0.2*bs;

gs= bs-(da+hr);  // gross_salary=basic_salary-dear. all.-hr;

printf("Gross Salary of Niloy : %.2lf", gs);



return 0;
}
