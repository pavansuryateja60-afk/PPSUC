#include<stdio.h>
int main()
{
	int n,i;
	double f=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	f=f*i;
	printf("The factorial of %d is :%lf",n,f);
	return 0;
}
