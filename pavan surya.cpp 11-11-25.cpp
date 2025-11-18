#include<stdio.h>
int main()
{
	int a[10],i,j,n,min,temp;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	scanf("%d",a[i]);
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
		min=j;
	}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
    }
    printf("The Sorting order is:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
return 0;
}
    