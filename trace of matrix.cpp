#include<stdio.h>
int main()
{
	int r,j,sum=0;
	printf("enter the value of rows\coloumns:");
	scanf("%d",&r);
	int a[r][r];
	printf("enter the a matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<r;i++)
	
     sum=sum + a[i][i];
 
 printf("trace of matrix ; %d",sum);
	return 0;
}