#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{ if(a>c)
	printf("a i big");
	else 
	printf("c is big");
	}
	else
	{if(b>c)
	printf("b is big");
	else
	printf("c is big");
	}
	return 0;
}
