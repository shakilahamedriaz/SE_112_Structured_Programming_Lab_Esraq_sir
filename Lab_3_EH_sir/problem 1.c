#include<stdio.h>
int main(){

int i,hour, extraWork;

for(i=1; i<=10; i++){

    printf("\nEnter the working hour of employ : ");
    scanf("%d",&hour);

    if(hour>40){
        extraWork=(hour-40)*12;
        printf("\n%d Rs. is the overtime payment of the employ\n",extraWork);
    }
    else{
        printf("\nThis employ has not done overtime.\n");
    }
}


    return 0;
}
