//a program that prints array in reverse order.
#include<stdio.h>


int main() {
  int i,values[10];

  printf("Enter 10 integer numbers : ");

  // taking input and storing it in an array
  for(i=0;i<10;++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying Reverse order : \n");

  // printing elements of an array
  for(i=9;i>=0;--i) {
     printf("%d\n", values[i]);
  }
  return 0;
}

//output
//Enter 10 integer numbers : 1 2 3 4 5 6 7 8 9 99

//Displaying Reverse order :99 9 8 7 6 5 4 3 2 1
