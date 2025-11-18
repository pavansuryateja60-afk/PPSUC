#include<stdio.h>
int main()
{
	int i,j,n,a[10],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;j<n;i++)
	{
		for(j=0;j<n-i;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
  printf("The sorting order is:\n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}