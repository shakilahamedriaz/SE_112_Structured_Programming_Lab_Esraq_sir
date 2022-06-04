#include <stdio.h>
int main()
{

    int n,i,sum=0;
    printf("Please Input a some number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        printf("natural numbers are : %d",i);
        sum += i;

    }

    printf("Natural number sum = %d",sum);


    return 0;
}
