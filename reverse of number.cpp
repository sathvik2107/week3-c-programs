/*reverse of number*/
#include<stdio.h>
int main()
{
	int n,r=0,remainder;
	printf("enter an integer");
	scanf("%d",&n);
	while(n!=0){
      	remainder=n%10;
		r=r*10+remainder;
		n/=10;
	}	
	printf("reverse of the number is %d",r);
}
