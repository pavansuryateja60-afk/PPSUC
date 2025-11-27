#include<stdio.h>
int main()
{
	int i,l=0,j;
	char s[30];
	scanf("%[^\n]s", s);
	for(i=0;s[i]!='\0';i++)
	l++;
	for(j=l-1;j>=0;j--)
	printf("%c",s[j]);
	
 return 0;
}