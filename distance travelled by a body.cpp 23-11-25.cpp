#include<stdio.h>
int main()
{
	int a,u,t;
	float s;
	printf("enter the values of a u t");
	scanf("%d%d%d",&a,&u,&t);
	s=u*t+(a*t*t)/2;
	printf("distance fall is%f",s);
	return 0;
}
