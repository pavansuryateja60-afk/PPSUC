#include<stdio.h>
int main()
{
	int i,j,k;
	char s[30],p[30];
	scanf("%s\n", s);
	scanf("%s", p);
	for(i=0;s[i]!='\0';i++);
	for(j=0;p[j]!='\0';j++)
	s[i+j]=p[j];
	s[i+j]='\0';
	printf("%s",s);
	
	return 0;
}