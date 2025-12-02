#include<stdio.h>
int main(){
	int n,i,f=0;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		f++;
	}
	if(f==2)
	printf("%d is prime",n);
	else
	printf("%d is Not prime",n);
return 0;
}
