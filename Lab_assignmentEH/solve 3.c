#include <stdio.h>
int main()
{

    int n, sum=0;
    printf("Please Input a some number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(i%2 == 1){
            sum += i;
        }
    }

    printf("Odd numbers sum = %d",sum);


    return 0;
}

//output
//Please Input a some number : 10

//Odd numbers sum = 25
