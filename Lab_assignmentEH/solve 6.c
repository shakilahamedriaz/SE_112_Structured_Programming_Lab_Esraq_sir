#include <stdio.h>
int main()
{

    int n, sum=0;
    printf("Please Input a some number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            sum += i;
        }
    }

    printf("Even numbers sum is = %d\n",sum);


    return 0;
}
//output
//input :5
//sum=6
