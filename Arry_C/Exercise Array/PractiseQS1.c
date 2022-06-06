#include<stdio.h>
int main(){
    int marks[3];

    printf("Enter physics marks : ");
    scanf("%d",&marks[0]);

    printf("Enter chemistry marks : ");
    scanf("%d",&marks[1]);

    printf("Enter Math marks : ");
    scanf("%d",&marks[2]);
    
    
    printf("Phy = %d\nChem = %d\nMath = %d",marks[0],marks[1],marks[2]
    );


    return 0;
}