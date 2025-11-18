#include<stdio.h>
int main()
{
	int a[10][10],t[10][10],i,r,c,j;
	printf("enter the value of rows and coloumns:");
	scanf("%d%d",&r,&c);
	printf("enter the a matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	printf("transpose of the matrix:\n");
		for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}