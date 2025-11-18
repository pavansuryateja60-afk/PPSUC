#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],r,c,i,j,x[10][10],k;
	printf("enter the value of rows and column:");
	scanf("%d%d",&r,&c);
	printf("enter the value of the a matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the value of the b matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("addtion of the a+b matrix:\n");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			x[i][j]=0;
			for(k=0;k<c;k++)
			{
			x[i][j]=x[i][j]+(a[i][k]*b[k][j]);
		}
		}
	}	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	return 0;
}