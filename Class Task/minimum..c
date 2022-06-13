#include<stdio.h>
int main(){

int a[]={29,16,33,10,12};
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

printf("\nMinimum Number : \n\n");


        printf("%d\n",a[0]);


return 0;



}



