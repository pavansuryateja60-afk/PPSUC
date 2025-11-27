#include<stdio.h>
int main()
{
	int i,l=0;
	char s[30];
	scanf("%[^\n]s", s);
	for(i=0;s[i]!='\0';i++)
	l++;
	printf("%d",l);
   return 0;
}
