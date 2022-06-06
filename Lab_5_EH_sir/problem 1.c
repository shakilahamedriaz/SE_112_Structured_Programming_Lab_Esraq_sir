 //a program to sort an array in ascending order.
#include<stdio.h>
int main(){

int a[]={35,15,25,10,5};
int i,j,temp;
for(i=0; i<5; i++){

    printf("%d\n",a[i]);
}

for(i=0; i<5; i++){
    for(j=i+1; j<5; j++){


        if(a[i]>a[j]){


            temp=a[i];
            a[i]=a[j];
            a[j]=temp;




        }
    }
}

printf("Shorted array is Ascendig order : \n");

for(i=0; i<5; i++)
        printf("%d\n",a[i]);




return 0;



}
