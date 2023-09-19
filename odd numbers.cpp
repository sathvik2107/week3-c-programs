/*odd numbers from 1 to n*/
#include <stdio.h>
int main ()
{
	int i,n;
	printf("print odd numbers till");
	scanf("%d",&n);
	printf("all odd numbers from 1 to %d are",n);
	for(i=1;i<=n;i=i+2){
		printf("%d",i);
	}
	
}
