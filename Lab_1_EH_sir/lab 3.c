#include<stdio.h>
int main(){

int sub1,sub2,sub3,sub4,sub5,aggregate;
float percentage;
scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);


aggregate=sub1+sub2+sub3+sub4+sub5;

percentage=aggregate* (100.00/500.00);

printf("Aggregate mark obtained by student=%d\n",aggregate);
printf("Percentage of student=%.2f%\n",percentage);



return 0;
}
