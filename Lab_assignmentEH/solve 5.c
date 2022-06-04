#include <stdio.h>
int main()
{

    int n,t=2;
    printf("Please Input a row number piramid: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");

    }


    return 0;
}
