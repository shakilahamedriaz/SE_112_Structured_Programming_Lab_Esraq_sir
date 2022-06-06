//a program to find a minimum number from an array.

#include<stdio.h>
int main(){

int a[]={35,15,25,10,5};
int i,j,temp;
for(i=0; i<5; i++){

    printf("%d\n",a[i]);
}

for(i=0; i<5; i++){
    for(j=i+1; j<5; j++){


        if(a[i]<a[j]){


            temp=a[i];
            a[i]=a[j];
            a[j]=temp;




        }
    }
}

printf("Minimum Number: \n");

        printf("%d\n",a[4]);




return 0;



}




