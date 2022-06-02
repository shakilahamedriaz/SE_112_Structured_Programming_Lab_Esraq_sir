#include<stdio.h>
int main(){

int i,j,limit;
printf("Enter a number to define rows : ");
scanf("%d",&limit);

for(i=1;i<=limit; i++){

    for(j=1; j<=i; ++j){
        printf("%d ",i);
    }
    printf("\n");
}

return 0;
}
