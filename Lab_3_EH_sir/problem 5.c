#include<stdio.h>
int main(){
int num,take=0,i;

printf("Enter any positive number:");
scanf("%d",&num);

for(i=2;i<num;i++){

	if(num%i==0){

		take++;
		break;
	}

}

if(take==0){

	printf("%d is Prime Number",num);
}
else{

	printf("%d is Not Prime Number",num);

}

return 0;
 }
