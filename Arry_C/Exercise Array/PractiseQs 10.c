//int arr[1,2,3,4,5]
//for the given array what wil the following give?
//  a) *(arr+2)       b) *(arr+5)
#include<stdio.h>
//int countOdd(int arr[],int n);

int main(){
  int arr[]={1,2,3,4,5};

  printf("%d\n\n",*(arr+2));
  printf("%d\n",*(arr+5));

return 0;
}

//int countOdd(int arr[], int n){
   // int count=0;
   // for(int i=0; i<n; i++){
   //         count++;
  //      }
 //   }

//    return count;

//}
