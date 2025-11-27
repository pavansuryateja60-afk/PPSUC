#include<stdio.h>
int main()
{
	int i;
	char s[30],k[30];
	scanf("%[^\n]s", k);
	for(i=0;k[i]!='\0';i++)
	s[i]=k[i];
	printf("%s",s);
	
return 0;
}