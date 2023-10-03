/*sum of first n natural numbers*/
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter a natural number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("sum of the first %d numbers is %d",n,sum);

}
