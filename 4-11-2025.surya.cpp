#include<stdio.h>
int main()
{
	int a[10],i,n,pos,nv;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&pos);
	scanf("%d",&nv);
	a[pos]=nv;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}

	
	
