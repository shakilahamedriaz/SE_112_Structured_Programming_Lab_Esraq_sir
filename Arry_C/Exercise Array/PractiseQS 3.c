//pointer can be incremented and decremented.
//pointer in Array.

#include<stdio.h>
int main(){

int age=25;
int *ptr= &age;

printf("ptr = %u\n",ptr);

ptr++;
printf("ptr = %u\n",ptr);

ptr--;
printf("ptr = %u\n",ptr);


return 0;
}
