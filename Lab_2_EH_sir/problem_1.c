 #include<stdio.h>
 int main(){
6
float cp,sp,profit,loss;
printf("Enter the cost price of an item:");
scanf("%f",&cp);       //cp=cost price
printf("Enter the selling price of an item:");
scanf("%f",&sp);        //sp=selling price


if(cp<sp){
    printf("Seller has made profit\n");
    printf("Total Profit : %.2f\n",sp-cp);   //profit=selling price-cost price
}
else{
    printf("Seller has made incurred loss\n");
    printf("Total loss : %.2f\n",cp-sp);    //loss=cost price-selling price
}


     return 0;
 }