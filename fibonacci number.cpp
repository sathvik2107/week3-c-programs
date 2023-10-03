/*fibonacci number*/
#include<stdio.h>
int main()
{
	int i,n;
	int a=0,b=1;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("%d,%d",a,b);
	int c;
	for(i=2;i<n;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d",c);
		
	}
}
