#include<stdio.h>
int main(){

printf("Enter the values of three points : \n");

int x1,y1,x2,y2,x3,y3,slope1,slope2;

printf("(x1,y1)\n");
scanf("%d%d",&x1,&y1);
printf("(x2,y2)\n");
scanf("%d%d",&x2,&y2);
printf("(x3,y3)\n");
scanf("%d%d",&x3,y3);

slope1=(x2-x1)/(y2-y1);
slope2=(x3-x2)/(y3-y2);

if(slope1==slope2){
    printf("All three points fall on one straight line.\n");
}
else{
    printf("These three points do not fall on one straight line.\n");
}


    return;
}