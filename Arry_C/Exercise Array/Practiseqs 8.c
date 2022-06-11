//2D array -2 students 3 subjects marks related
#include<stdio.h>
int main(){

int marks[2][3];

marks[0][0]=90;
marks[0][1]=80;
marks[0][2]=85;

marks[1][0]=77;
marks[1][1]=88;
marks[1][2]=99;

printf("marks of 2nd student 2nd subj %d\n\n",marks[1][1]);

int abc=marks[0][2]+marks[1][1];
printf("%d\n\n",abc);


return 0;
}
