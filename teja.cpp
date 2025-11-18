#include<stdio.h>
int main()
{
	char a;
	char b[10];
	char c[20];
	printf("enter a character");
	scanf("%c",&a);
	printf("enter a word");
	scanf("%s\n",b);
	printf("enter a sentence");
	scanf("%[^\n]s", c);
printf("character:%c\nWord:%s\nSentence:%s",a,b,c);
    return 0;
}
  
