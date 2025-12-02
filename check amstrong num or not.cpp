#include<stdio.h>
#include<math.h>
int main()
{
	int n,rem,sum=0,temp,d=0;
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		d++;
		temp=temp/10;
	}
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+pow(rem,d);
		temp=temp/10;
	}
	if(sum==n)
	printf("Amstrong Number");
	else
	printf("Not Amstrong Number");
return 0;
}
