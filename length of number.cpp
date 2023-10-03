/*length of number*/
#include<stdio.h>
int main()
{
	int n,i=0;
	printf("enter an integer");
	scanf("%d",&n);
	while(n!=0){
		n=n/10;
		i++;
	}
	printf("length of number is %d",i);
	
}
