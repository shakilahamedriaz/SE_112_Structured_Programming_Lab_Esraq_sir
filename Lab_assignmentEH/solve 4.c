#include <stdio.h>
int main()
{

    int n,t=2;
    printf("Please Input a row number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for (int j = 2; j <= i+2; j++)
        {
            printf("%d ",t++);
        }
        printf("\n");

    }


    return 0;
}
