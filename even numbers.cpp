/*even numbers from 1 to n*/
#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the even numbers till");
	scanf("%d",&n);
	printf("the even numbers from 1 to %d are",n);
	for(i=2;i<=n;i=i+2){
		printf("%d",i);
	}
}
