#include <stdio.h>
int main()
{
	int a[10],key,f=0,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			f++;
			break;
		}
	}
    if(f==0)
    printf("key is not found");
    else
    printf("%d found at %d position",key,i);
    return 0;
    }