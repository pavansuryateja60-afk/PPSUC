#include <stdio.h>

int main()
{
	int p,t,r;
	float simple_interest;
	scanf("%d%d%d",&p,&t,&r);
    simple_interest=(p*t*r)/100;
    printf("simple interest is:%f",simple_interest);

    return 0;
}
