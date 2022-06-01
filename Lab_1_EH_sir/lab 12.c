#include<stdio.h>
int main(){


//given that, the selling price of 15 items.
float total_profit,cost_per_item;
printf("Enter the total profit :");
scanf("%f",&total_profit);    //input take from the total profit of 15 items

cost_per_item= total_profit/15;



printf("The cost price of one itam is : %.2f taka",cost_per_item);


return 0;
}
