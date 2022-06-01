#include<stdio.h>
int main(){

int Arif, Fahmid, Joy;
printf("Enter Arif's age :");
scanf("%d",&Arif);
printf("Enter Fahmid's age");
scanf("%d",&Fahmid);
printf("Enter Joy's age :");
scanf("%d",&Joy);

if(Arif<Fahmid && Arif<Joy){
    printf("Arif is the youngest of the three\n");
}
else if(Fahmid<Arif && Fahmid<Joy){
    printf("Fahmid is the youngest of three.\n");
}
else{
    printf("Joy is the youngest of the three\n");
}


    return 0;

}