//we can also subtract one pointer from another .
//we can also compare 2 pointers.
#include<stdio.h>
int main(){


int age=32;
int _age=44;

int *ptr=age;
int *_ptr=_age;

printf("%u,%u Difference = %u \n",ptr,_ptr, ptr-_ptr);

_ptr=&age;

printf("Comparison = %u \n",ptr==_ptr);

return 0;
}
