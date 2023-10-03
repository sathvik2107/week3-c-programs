/*multiplication table */
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number");
	scanf("%d",&n);
	printf("multiplication table of %d",n);
	printf("___");
	for(i=1;i<=10;i++){
		printf("%d*%d=%d",n,i,n*i);
	}
}
